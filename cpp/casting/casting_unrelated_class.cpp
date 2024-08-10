/*Example: Casting */

//Forced casting is dangerous between unrelated classes

// Example program
#include <iostream>
#include <string>

using namespace std;

class A{
public : int i;
};

class B{
public : double j;
};

int main()
{
	A a;
	B b;

	a.i = 4;
	b.j = 9.5;

	A *p = &a;
	B *q = &b;

	cout <<p->i<<" "<<q->j<<endl;

	q = (B*)&a;
	p = (A*)&b;
	cout <<p->i<<" "<<q->j<<endl;

	return 0;
}
