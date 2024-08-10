#include<iostream>

#include<cstring>
using namespace std;

template <class T>

T Max(T x, T y){
        return x>y ? x:y ;
}
    //Template specialization
    template<>
char *Max<char *>(char *x, char *y){
        return strcmp(x,y)>0 ? x:y;
    }

int main(){
    int imax;
    int a=10; int b=15;
    double dmax;
    double c=5.6; double d=2.4;
    imax = Max<int>(a,b);
    //imax = Max(a,b);
    cout<<"int max "<<imax<<endl;
    dmax = Max(c,d);
    cout<<"double max "<<dmax<<endl;
    char *s1 = new char[10];
    char *s2 = new char[10];
    strcpy(s1, "vikas");    strcpy(s2, "viks");
    cout<<"char max "<<Max(s1,s2)<<endl;

    return 0;

}
