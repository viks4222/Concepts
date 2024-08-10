// Example program
#include <iostream>
#include <string>

using namespace std;

int* sorted(int array[]);
int* waveSorted(int array[]);

int main()
{
int arr[10];
for(int i=0; i<10;i++){
    arr[i]=(rand()%100);
    }
cout <<" The Array:\n";
for(int i=0; i<10;i++){
    cout <<arr[i]<<" ";
    }
int *array =sorted(arr);   
cout <<"\n Sorted Array:\n";
for(int i=0; i<10;i++){
    cout <<array[i]<<" ";
    } 
    int *wave =waveSorted(array);  
    cout <<"\n WaveSorted Array:\n";
    for(int i=0; i<10;i++){
    cout <<wave[i]<<" ";
    } 
   
}


int* sorted(int array[]){
    int i,j,temp;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(array[i]<array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
                }
            }
        }
    return array;
    }
  
int* waveSorted(int array[]){
    int i, temp;
    for(i=0;i<9;i+=2){
        temp = array[i+1];
        array[i+1] = array[i];
        array[i]= temp;
        }
    return array;
    }

