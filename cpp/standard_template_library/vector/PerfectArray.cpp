// Example program
#include <iostream>
#include <string>

using namespace std;
string checkPerfectArray(int arr[],int N){
    int j =0;
    string status = "No";
    char stat ='N' ;
    for(int i =j;i<N;i++){
        if((stat=='I' || stat=='N') && (arr[i+1]>arr[i])){
            j+=1;
            stat='I';
            cout << "INcreasing" <<"\n";
            status = "Yes";
        }
        else if((stat=='I' || stat=='N' || stat == 'C') && (arr[i+1]==arr[i])){
            j++;
            stat = 'C';
            status = "Yes";
            cout << "Constant" <<"\n";            
        }
        else if((stat=='C'|| stat=='N' || stat == 'D') && (arr[i+1]<arr[i])){
            j++;
            stat = 'D';
            status = "Yes";
            cout << "DEcreasing" <<"\n";            
        }
        else if(j<N-1){
            status =  "No";
            stat = 'O';
            cout << "Other" <<"\n";
            break;
        }
    }
    return status;    
}

int main()
{
int T,N;
int arr[1000];
cin >> T;
while(T!=0){
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> arr[i];
        }
        string output =checkPerfectArray(arr,N);
        cout <<output; 
        T--;
    }
}
