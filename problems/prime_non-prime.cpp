// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{   
    cout <<"Enter the number"<<endl;
    int n;
    cin >> n;
    bool prime = true;
    if((n==0) || (n==1)){   //check for  0,1 as they re non prime numbers
        prime = false;           
    }
    else{
        for(int i =2; i<n; i++){   //loop is started from 2 as i =1 will retur true in every case
            if(n%i == 0){
                prime = false;
            }
        }
    }
    if(true == prime){
        cout <<"Its a prime number"<<endl;     
    }
    else{
        cout <<"Its a non-prime number"<<endl; 
    }
    return 0;
}
