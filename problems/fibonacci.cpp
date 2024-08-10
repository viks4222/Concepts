#include <iostream>
#include <string.h>
using namespace std;

//function to provide fibonacci value for an index
int fn(int n){
    int value;
    if(n == 0){
        value = 0;
    }
    else if(n == 1){
        value = 1;
    }
    else{
        value = fn(n-2)+fn(n-1);
    }
    return value;
}

//function to print the fibonacci sersies upto the given index
void printSeries(int n){
    for(int i=0; i<=n; i++){
        cout<<fn(i)<<"\t";
    }
}
int main()
{
    cout <<"Enter a number"<<endl;
    int index;
    cin >>index;
    int val = fn(index);
    cout<<"Fibo value of index "<<index<<" is :"<<val<<endl;
    printSeries(index);
    return 0;
}

