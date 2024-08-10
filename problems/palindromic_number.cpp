// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,rem;
    int rev = 0;
    cout <<"Enter the number:"<<endl;    
    cin >>n;
    int temp = n;
    while(n>0){
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    if(temp == rev){
        cout << "its a palindromic number!"<<endl;
    }
    else{
    cout << "its NOT a palindromic number!"<<endl;
    }
    return 0;
}
