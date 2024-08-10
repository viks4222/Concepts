#include <iostream>

using namespace std;

void printArray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout <<arr[i]<<"\t";
	}
}

void swap(int &x, int &y){
	int temp =x;
	x = y;
	y = temp;
}

void selectionSort(int arr[], int n){
	int i,j,minIdx;
	for(i=0;i<n-1;i++){
		minIdx = i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[minIdx]){
				minIdx = j;
			}
		}
		swap(arr[i],arr[minIdx]);
	}
}
int main(){
	int arr[] = {9,8,7,6,5,4};
	int n = sizeof(arr)/sizeof(int);
	selectionSort(arr,n);
	cout <<"\n"<<"sorted array:";
	printArray(arr,n);
}
