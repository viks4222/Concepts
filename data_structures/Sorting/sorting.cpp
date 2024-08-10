/*
 * main.cpp
 *
 *  Created on: Oct 14, 2018
 *      Author: vikasr2
 */

#include <iostream>

using namespace std;

void display(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<"\t";
	}
}

void swap(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
}

void bubbleSort(int arr[], int n){
    int i,j;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-1; j++){
            if(arr[j+1] < arr[j]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
//Repeatedly finding the min element from unsorted part and putting it at begining
void selectionSort(int arr[], int n){
    //declare minIdx to store the index of the min ele found in one iteration
    int i, j, minIdx;
    //run outer iteration upto n-1 times
    for(i=0; i<n-1; i++){
        //set the minIdx every time to the starting ele of the unsorted part
        minIdx = i;
        //run inner iterations for unsorted part and find min ele and set the minIdx to it
        for(j =i+1; j<n; j++){
            if(arr[minIdx] > arr[j]){
                //set the minimum ele index
                minIdx = j;
            }
        }
        //Once the minIdx is found from inner iteration swap it with the first ele of the unsorted part
        swap(arr[minIdx], arr[i]);
    }
}

void insertionSort(int arr[], int n){
    //declare key the element to be inserted in sorted array.
    int i,j,key;
    //outer iteration from 2nd ele to last ele.
    for(i=1; i<n; i++){
        //set key to the unsorted ele.
        key = arr[i];
        //j will be i-1 as comparision to be done till key ele and other ele will be moved front
        j = i-1;
        //move element greater than key by one till j reaches first ele.
        while( j >=0 && arr[j]>key){
                arr[j+1] = arr[j];
                j = j-1;
        }
        arr[j+1] = key;
    }
}

int main(){
	int input[] = {7,2,1};
	int size = sizeof(input)/sizeof(int);
	display(input, size);
	cout<<"\n";
	//bubbleSort(input, size);
	//selectionSort(input, size);
	insertionSort(input, size);
	display(input, size);
	return 0;
}
