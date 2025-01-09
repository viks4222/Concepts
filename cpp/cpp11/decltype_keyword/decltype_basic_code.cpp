/******************************************************************************
decltype Keyword use in C++11

Deduces the type from the variable whose type is known at compile time and create another variable with that type.
Static initialization/Compile time initiakization
*******************************************************************************/
#include <iostream>
#include <typeinfo>

using namespace std;

int fun1()
{
    return 10;
}

char fun2()
{
    return 'a';
}

int main()
{
    int x;
    decltype(x) y;
    cout<<"type of y is : "<<typeid(y).name()<<endl;

    decltype(fun1()) j;
    decltype(fun2()) k;

    cout<<"type of j is : "<<typeid(j).name()<<endl;
    cout<<"type of k is : "<<typeid(k).name()<<endl;

    return 0;
}
