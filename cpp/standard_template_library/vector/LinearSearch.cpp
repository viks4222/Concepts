// Example program
#include <iostream>
#include <string>

using namespace std;


int searchIndex(int array[],int N,int E){
    int i =0;
    for(i=0;i<N;i++){
        if(array[i] == E){
            return i;
            }    
    }
    return -1;
}
int main()
{
int T,N,E;
int array[100];

cout <<"Enter the no of test cases:"<<"\n";
cin >>T;
while(T!=0){
    cout <<"Enter the no of elements:"<<"\n";
    cin >>N;
    cout <<"Enter element array:"<<"\n";
    for(int i =0;i<N;i++){
        cin>>array[i]; 
    }    
    cout <<"\n"<<"Enter elements to find its index:"<<"\n";
    cin >>E;
    cout <<"index:"<<searchIndex(array,N,E)<<"\t";
    T--;
    }
}
