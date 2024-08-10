// Example program
#include <iostream>
#include <string>

//function to find factorail 
using namespace std;
int factorial(int number){
    int val = 1; 
    while(number){
        val = val*number;  
        number--;
    }
return val;
}

//function to find factorail using recursive expressions;
int recFactorial(int n){
    if(n == 0){
        return 1;
    }
    else {
        return n*(recFactorial(n-1));    
    }
}

int main()
{
    int number;
    cout <<"Enter number"<<endl;
    cin >> number;
    int factorialValue = factorial(number);
    cout <<"Factorial value of number:"<<factorialValue<<endl;;
    
    factorialValue = recFactorial(number);
    cout <<"Factorial value of number using recursive function:"<<factorialValue<<endl;
    return 0;
}
