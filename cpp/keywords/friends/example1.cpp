/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;
class test;

class manager
{
    public:
        test *t;
        manager(){}
        void createTestInstance(){

        }
};

class test
{
            test(const char *arg)
        {
            int len = strlen(arg);
            name = new char[len];
            strcpy(name, arg);
        }

    public:
        test();
        test(const test& obj)
        {
            int len = strlen(obj.name);
            name = new char[len];
            strcpy(name,obj.name);
        }
        ~test()
        {
            delete[] name;
        }
    friend void manager::createTestInstance();
    private:
         char *name;
};


int main()
{
	return 0;
}
