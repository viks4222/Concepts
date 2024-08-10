#include<iostream>


using namespace std;

int main(){
	int x = 0;
	string str = "test"
	getline(str,cin);
	cout <<"Print the input"<<str<<"\n";
	try{
		cout <<"try block"<<"\n";
		if(str == "exc"){
			cout <<"throw block"<<"\n";
			throw str;
		}
	}
	catch(str){
		cout <<"Catch block"<<"\n";	
	}
}
