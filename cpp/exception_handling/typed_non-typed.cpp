/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void empty() throw(){
    cout <<"Throw empty"<<endl;
}

void type() throw(int) {
    cout<<"Throw typed exception"<<endl;
    throw(1);
}

int main()
{
    try{
        empty();
        type();
    }
    catch(int){
        cout<<"catch typed exception"<<endl;
    }
    catch(...){

    }
    return 0;
}
