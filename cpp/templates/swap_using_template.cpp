#include<iostream>
#include<cstring>
using namespace std;

template <class T>
void swap1(T& a, T& b){
    T temp;
    temp = a;
    a    = b;
    b    = temp;
}

int main(){

    int a = 10;
    int b = 20;
    cout<<"Before swap a = "<<a<<" b = "<<b<<endl;
    swap1(a,b);
    cout<<"after swap a = "<<a<<" b = "<<b<<endl;
    double c = 3.4 ;
    double d = 6.7;
    cout<<"after swap c = "<<c<<" d = "<<d<<endl;
    swap1(c,d);
    cout<<"after swap c = "<<c<<" d = "<<d<<endl;
    return 0;
}
