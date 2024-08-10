#include <iostream>
using namespace std;

string checkPerfectArray(int arr[],int N){
    string status = "NOT PERFECT";
    bool flag = true;
    for(int i=0;i<N;i++){
        int j = N-1-i;
        if(arr[i]!=arr[j]){
                flag=false;
            }
        }
    if(flag == true){
        status = "PERFECT";
        }
    else{
        status = "NOT PERFECT";
        }    
    return status;    
    }

int main() {
    int T,N;
    int arr[1000];
    cin >> T;
    while(T!=0){
        cin >> N;
        for(int i=0;i<N;i++){
            cin >> arr[i];
        }
        
        string output =checkPerfectArray(arr,N);
        cout <<output<<"\n"; 
        T--;
    }
}