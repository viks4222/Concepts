/******************************************************************************
scope access example
*******************************************************************************/
#include <iostream>
#include <typeinfo>

using namespace std;

// template<class A, class B , class T>

// auto getArea()
// {

// }
int x = 10;

void fun(){
    int x = 5;
    cout<<"global x value : "<<::x<<endl;
    cout<<"global x value : "<<x<<endl;
}
int main()
{
    fun();
    return 0;
}
