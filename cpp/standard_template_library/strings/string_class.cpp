#include <iostream>
#include <string.h>

using namespace std;

class A{
private:
    char *s;
    int size;
public:
    char *str;
    A(const char* temp  = NULL){
        //cout<<"Enter A::Constructor"<<endl;
        size = strlen(temp);
        s = new char[size+1];
        strcpy(s,temp);
    }

    ~A(){
        //cout<<"Enter A::Destructor"<<endl;
        delete [] s;
    }

    A(const A& old_str){
        //cout<<"Enter A::Copy Constructor"<<endl;
        size = strlen(old_str.s);
        s = new char[size+1];
        strcpy(s,old_str.s);
    }

    void print(){
        cout<<"string:"<<s<<endl;
    }

    void change(const char* str){
       delete [] s;
       size = strlen(str);
       s = new char[size+1];
       strcpy(s,str);
    }

    A& operator =(const A& old_str){
        //cout<<"Enter:operator ="<<endl;
        strcpy(s,old_str.s);
        return *this;
    }

    A& operator +(const A& old_str){
        strcat(s,old_str.s);
        cout<<"new string after addition:"<<s<<endl;
        return *this;
    }

};

int main()
{
    A a("viks");             //default constructor invoked which does the primary initialization
    a.print();
    A a1 = a;                //Copy constructor invoked as a new object is created using existing object
    a1.print();
    a1.change("pradc");      /*updated the string for object a1 ,if there is no copy constructor this
                               would have changed the string for a also as the memory location would have been same.
                             */
    a1.print();
    A a2("sid");
    a1 = a2;                 //Asignement operator is invoked as we assign existing object to another existing object
    a1.print();
    A a3("hello");
    a3+a2;                  //Addition operator is inovked

    return 0;
}


