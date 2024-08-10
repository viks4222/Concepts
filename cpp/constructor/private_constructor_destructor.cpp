/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class test{
    test(){};
    ~test(){};
    public:
        static test *ptrTest;
        static test *createInstance();
        void deleteInstance(){
            if(NULL != ptrTest ){
                delete ptrTest;
            }
        };
        void printTest(){
            cout <<"I am test class"<<endl;
        };
};

test *test :: ptrTest = NULL;

test *test :: createInstance()
{
    if(NULL == ptrTest){
        ptrTest = new test();
    }
    return ptrTest;
};


int main()
{
    test :: createInstance()->printTest();
    test :: createInstance()->deleteInstance();
    return 0;
}
