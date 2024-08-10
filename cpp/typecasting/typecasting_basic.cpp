/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class A{
    public:
    void showA(){
        cout << "I am A class"<<endl;
    }
};

class B: public A{
    public:
    void showB(){
        cout << "I am B class"<<endl;
    }
    const char *name;
};


int main()
{
    A *aPtr = new A();

    B *bPtr = static_cast<B*>(aPtr);
    bPtr->showA();
    return 0;
}
