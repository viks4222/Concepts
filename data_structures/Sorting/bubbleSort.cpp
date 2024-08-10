#include <iostream>

using namespace std;

void swap(int &x, int &y){
    int temp =x;
    x = y;
    y = temp;
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout <<arr[i]<<"\t";
    }
}
void bubbleSort(int arr[], int n){
  int i,j;
  for(i=0;i<n-1;i++){
	  //Last i elements are already in place
      for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }    
          }
                    cout <<"pass:"<<i<<endl;                    
                    printArray(arr,n);      
      }
}



int main(){
    int arr[] = {9,8,7,6,5,4};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    cout <<"sorted array:";
    printArray(arr,n);
}`