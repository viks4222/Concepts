/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

 *******************************************************************************/

#include <iostream>

using namespace std;

class base{
public:
	base(int n):myInt(n){ cout <<"base const called"<<endl; }
	virtual ~ base(){ cout <<"base Destr called"<<endl;
	}
protected:
	int myInt;
};

class derived : public base{
public:
	derived(){ cout <<"derived const called"<<endl; }
	~derived(){ cout <<"derived Destr called"<<endl; }
};

int main()
{
	base *bPtr = new derived();
	delete bPtr;
	return 0;
}
