/******************************************************************************
decltype - auto combined use in c++11
*******************************************************************************/
#include <iostream>

using namespace std;

template <class A, class B>
auto findMax(A x, B y) -> decltype((x>y) ? x:y)
{
	return (x>y) ? x:y;
}

int main()
{
    cout<<findMax(4, 4.14);
	return 0;
}
