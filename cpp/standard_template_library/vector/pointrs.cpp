#include<iostream>

using namespace std;

int main(){
int *p1,*p2;
int first,second;
p1 =&first;
p2 =&second;
cout<<"Address of p1: "<<&p1<<"\t"<<"Address of p2: "<<&p2<<"\n";
*p1 =20;
*p2 =40;
*p1 =*p2;
*p2= 100;

//cout<<"Address of p1: "<<&p1<<"\t"<<"Address of p2: "<<&p2<<"\n";
//cout<<"Value of first: "<<first<<"\t"<<"value of second: "<<second<<"\n";
//cout<<"Value of p1: "<<*p1<<"\t"<<"value of p2: "<<*p2<<"\n";
//cout<<"Adress of first: "<<&first<<"\t"<<"address of second: "<<&second<<"\n";

int array[5];
int *a;
a = array; //a pointing to the first element of the array
*a =10;
cout<<"Value of array: "<<*a<<"\t"<<"adress of array: "<<a<<"\n";
a = &array[1];
*a= 20;
cout<<"Value of array: "<<*a<<"\t"<<"adress of array: "<<a<<"\n";
a++;
*a = 30;
cout<<"Value of array: "<<*a<<"\t"<<"adress of array: "<<a<<"\n";
a = array;
*(a+3) =40;
cout<<"Value of array: "<<*(a+3)<<"\t"<<"adress of array: "<<a+3<<"\n";
a = array+4;
*a =50;
cout<<"Value of array: "<<*a<<"\t"<<"adress of array: "<<a+4<<"\n";
for(int i=0;i<5;i++){
    cout <<array[i]<<"\t";
    }
return 0;
}