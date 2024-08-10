// Example program
#include <iostream>
#include <string>

using namespace std;

void printMatrix();
void matrix(int,int);
int arr[10][10];
int j,k;

int main()
{
    cout<<"Enter the rows:"<<"\n";
    cin >>j;
    cout<<"Enter the columns:"<<"\n";
    cin >>k;
    cout<<"Enter the matrix values:"<<"\n";
    matrix(j,k);
    cout<<"show matrix: "<<"\n";
    printMatrix();
    return 0;
}
void printMatrix(){
            for(int m=0;m<j;m++){
                    cout<<"\n";    
                for(int n=0;n<k;n++){
                    cout<<arr[m][n];
                    cout<<"|"<<"\t";    
                    }
            }    
    }

void matrix(int j,int k){
            for(int m=0;m<j;m++){
                for(int n=0;n<k;n++){
                    cin>>arr[m][n];
                    }
            }
}