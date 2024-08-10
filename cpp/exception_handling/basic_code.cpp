/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int division(int a, int b){
    if(a == 0){
        throw "Division by zero";
    }
    return b/a;
}

int main()
{
    int x,y,z;
    x = 0;
    y = 1;
    try{
        z = division(x,y);
    }
    catch(const char* msg){
        cerr <<msg;
    }
    catch(...){
        cerr <<"Throwing common error";
    }
    return 0;
}
