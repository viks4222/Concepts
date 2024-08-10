// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{   
    cout <<"Enter the array size"<<endl;
    int n;
    cin >> n;
    cout <<"Enter the array numbers:"<<endl;
    int arr[10];
    for(int i =0 ;i<n;i++){
        cin >> arr[i];
    }
    int temp =arr[0];
    for(int i =1 ; i< n;i++){
     if (temp<arr[i]){
            temp = arr[i];
        }
    }
    cout <<"Greatest number of all:"<<temp;
    return 0;
}
