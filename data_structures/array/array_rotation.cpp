// Example program
#include <iostream>
#include <string>

using namespace std;

void rotateByOne(int arr[], int n){
	int temp = arr[0];
	for(int i = 0; i<n-1; i++){
		arr[i] = arr[i+1];
	}
	arr[n-1] = temp;
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<"\t"<<arr[i] ;
    }
}

void rotateByNum(int arr[], int n, int d){
int tArr[d];
int i;
    for(i=0; i<n; i++){
        tArr[i] =arr[i];
    }

    for(i=0; i<n; i++){
        if(i<n-d){
        arr[i] = arr[i+d];
        }
        else{
        arr[i] = tArr[i-n+d];
        }
    }
}

int main()
{   int i,d,n;
    int arr[] = {1,2,3,4,5,6,7,8};
    //get size of arr
    n =sizeof(arr)/sizeof(int);
    d = 3;

    rotateByOne(arr, n);

    //print arr
    cout<<"array: "<<endl ;
    print(arr, n);

    return 0;
}
