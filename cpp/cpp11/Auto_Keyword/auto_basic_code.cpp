/******************************************************************************
Auto Keyword use in C++11

Auto keyword is used to automatically deduce the type of variable from its initializer
Static initialization/Compile time initiakization
*******************************************************************************/
#include <iostream>
#include <typeinfo>

using namespace std;

//using trailing return type in auto function
auto add(int a, int b) -> int
{
    return a+b ;
}

//C++14 : Paramter declaration available in c++14, also function doesn;t need trailing return type
// auto get(auto  input)
// {
//      return input;
// }

//C++11
auto get(int input) -> int
{
     return input;
}

int main()
{   //Automatic type deduction from the initiizer
    auto input = 'a';
    //Print the type of the input
    cout <<"type of the input = "<<input<<" is: "<<typeid(input).name()<<endl;

    auto x = 4;
    auto y = 3.14;
    auto z = 34556455;
    auto ptr = &x;

    cout <<"type of x is : "<<typeid(x).name()<<endl;
    cout <<"type of y is : "<<typeid(y).name()<<endl;
    cout <<"type of z is : "<<typeid(z).name()<<endl;
    cout <<"type of ptr is : "<<typeid(ptr).name()<<endl;

    cout<<"addition: "<<add(1,4)<<endl;

    cout <<"type of get function is:"<<typeid(get(20)).name()<<endl;

    //iterating an array/vector using auto is simpler
    auto array = {1,5,3,8};

    for(auto itr:array)
    {
    	cout<<itr<<"\t";
    }
    return 0;
}
