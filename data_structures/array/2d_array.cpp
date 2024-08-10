// Example program
#include <iostream>
#include <string>

using namespace std;

void display(int *arr,int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<*(arr+i*col+j)<<"\t";
        }
        cout<<"\n";
    }
}

int main()
{
    int r, c;
    cin >>r;
    cin >>c;
    int count =0;
    //2D array using single pointer
    int *arr = new int(r*c);
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            *(arr + i*c + j) = ++count;
        }
    }
    display(arr,r,c);
    count = 0;
    //Using pointer to pointer
    int **array =new int *[r];
    for(int i=0; i<r; i++){
        array[i] = new int[c];
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            array[i][j] = ++count;
        }
    }
    display(*array,r,c);

    return 0;
}
