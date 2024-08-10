// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string str;
    cout <<"Enter the string:"<<endl;
    cin >> str;
	int n = strlen(str);
    int flag = 0;
    for(int i =0 ;i<n;i++)    
		if(str[i] != str[n-1-i]){
			flag = 1;
			break;
        }
    if(1 != flag){
        cout << "its a palindromic sequence!"<<endl;
    }
	else{
		cout<<"This is not a palindromic sequence"<<endl;
	}
    return 0;
}
