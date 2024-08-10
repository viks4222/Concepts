#include <iostream>

using namespace std;

void print(char *arr, int n){
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    //char *arr = "VIKASR";
    char arr[] = "VIKASR";
    int n = (sizeof(arr)/sizeof(char));
    print(arr, n);
    int start = 0;
    int end = n;
    char temp;
    while(start<end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end --;
    }
    print(arr, n);
}
