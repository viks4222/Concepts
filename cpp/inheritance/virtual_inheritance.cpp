/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class A{
    public:
      void foo(){
         cout << " A::foo"<<endl;
     }
};

class B: virtual public A{
    public:
      void foo(){
         cout << " B::foo"<<endl;
     }
};

class D: virtual public A{
    public:
     void fooD(){
         cout << " D::foo"<<endl;
     }
};
class C: public B, public D{
    public:
     void fooC(){
         cout << " C::foo"<<endl;
     }
};

int main()
{
    C cObj;
    cObj.foo();
}
