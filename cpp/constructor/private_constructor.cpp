// Example program
#include <iostream>
#include <cstring>

using namespace std;

class Base{
private:
    char *s;
public :
    Base(const char *temp = NULL){
        cout<<"Base::Constructor"<<endl;
        int size = sizeof(temp);
        s = new char[size+1];
        strcpy(s,temp);
   }
    Base(const Base& obj){
        int size = sizeof(obj.s);
        s = new char[size+1];
        strcpy(s,obj.s);
    }

    Base& operator =(const Base& obj){

    }
    void show(){
        cout<<"show s:"<<this->s<<endl;
    }

    void change(const char *temp = NULL){
        delete [] s;
        int size = sizeof(temp);
        s = new char[size+1];
        strcpy(s,temp);
    }
    ~Base(){
        cout<<"Base::Destructor"<<endl;
    }
};

int main()
{
    Base bs("viks");
    bs.show();
    Base bs1 = bs;
    bs1.show();
    bs1.change("pradc");
    bs1.show();

}
