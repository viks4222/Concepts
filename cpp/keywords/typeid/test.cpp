/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<typeinfo>

using namespace std;

class test{
    public:
        virtual int func(){

        }
};

int main()
{

    try{
        test *tPtr = NULL;
        typeid(*tPtr);
    }
    catch(exception& typevar){
        cout<<typevar.what();
    }
    return 0;
