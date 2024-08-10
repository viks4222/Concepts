// Example program
#include <iostream>
#include <string>

using namespace std;

class Base{
public :
    Base(){
        cout<<"Base::Constructor"<<endl;
    }
    virtual void function1(){
        cout<<"Base::function2"<<endl;
    }
    virtual void function2(){
        cout<<"Base::function2"<<endl;
    }
    virtual ~Base(){
        cout<<"Base::Destructor"<<endl;
    }
};

class Derived1: public Base{
public :
    Derived1(){
        cout<<"Derived1::Constructor"<<endl;
    }
    void function1(){
        cout<<"Derived1::function1"<<endl;
    }
    ~Derived1(){
        cout<<"Derived1::Destructor"<<endl;
    }
};

class Derived2: public Base{
public :
    Derived2(){
        cout<<"Derived2::Constructor"<<endl;
    }
    void function2(){
        cout<<"Derived2::function1"<<endl;
    }
    ~Derived2(){
        cout<<"Derived2::Destructor"<<endl;
    }
};

int main()
{
    Base *bs = new Base();
    bs = new Derived1();
    bs->function1();
    bs = new Derived2();
    bs->function2();

}
