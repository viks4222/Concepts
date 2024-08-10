/* Example program: 1. Swapping  without  temp variable
					2. Swapping using bitwise operator.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//1. Swapping  without  temp variable
    int a,b;
    cout <<"Enter numbers "<<endl;
    cin >> a;
    cin >> b;
    cout <<"before swap: a="<<a<< " b="<<b<<endl;
    a = a+b; 
    b = a-b;
    a = a-b;
    cout <<"after swap: a="<<a<< " b="<<b<<endl;
	
	
     cout<<"Enter the two numbers:"<<endl;
     int A,B; //suppose A = 5 & B = 9
     cin >>A;     //BitWise val of A = 0000 0101
     cin >>B;     //BitWise val of B = 0000 1001
     cout<<"numbers Before swapping: A="<<A<<" B="<<B<<endl;
     A = A^B;      //BitWise XOR operator  A = 0000 1100
     B = A^B;      // B = 0000 0101
     A = A^B;      // A = 0000 1001
     cout<<"numbers Before swapping: A="<<A<<" B="<<B<<endl; 
    return 0;
}
