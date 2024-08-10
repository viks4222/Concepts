/*Virtual Functions:
A virtual function declared in a class shall be defined, or declared pure in that class, or both
So either you should make the function pure virtual or provide a definition for it.
Note that a destructor must be defined even if it is declared pure-virtual 
1.A class with atleast one method as pure virtual is called abstract class
2.If all the moethods in a class are pure virtual it is an interface class and it should have an 
implementor class where function definations are provided.
3.An abstract class can have constructors.
4.If we do not override the pure virtual function in derived class, then derived class also becomes abstract class
5 We can have pointers and references of abstract class type.
*/

#include<iostream>

using namespace std;

class base{
private:
    int number;
public:
    base(int i =0){
    cout <<"Base::Const called"<<endl;
    number = i;
    }
    virtual void function1(){
    cout <<"Base::Function1 called"<<endl;
    }
    virtual void function2(){
    cout <<"Base::Function2 called"<<endl;        
    }
    ~base(){
    cout <<"Base::Destructor called"<<endl;    
    }
    
};

class Interface{
private:
    int number;
public:
    Interface(int i =0){
    cout <<"Interface::Const called"<<endl;
    number = i;
    }
    virtual void functionA() = 0;
    
    virtual void functionB(){
    cout <<"Interface::Function2 called"<<endl;        
    }
    /* It's even more important for an interface. Any user of your class will probably hold a pointer to the interface,
     * not a pointer to the concrete implementation. When they come to delete it, if the destructor is non-virtual,
     * they will call the interface's destructor (or the compiler-provided default, if you didn't specify one),
     *  not the derived class's destructor. Instant memory leak.
     */
    ~Interface(){
    cout <<"Interface::Destructor called"<<endl;    
    }
        
};

int main()
{
    return 0;
}


