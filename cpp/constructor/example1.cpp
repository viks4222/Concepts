/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

class test
{
    public:
        test();
        test(const char *arg)
        {
            int len = strlen(arg);
            name = new char[len];
            strcpy(name, arg);
        }
        test(const test& obj)
        {
            int len = strlen(obj.name);
            name = new char[len];
            strcpy(name,obj.name);
        }
        void print()
        {
            cout<<"name is: "<<name<<endl;
        }
        void change(char *arg)
        {
            name = NULL;
            int len = strlen(arg);
            name = new char[len];
            strcpy(name, arg);
        }
        ~test()
        {
            delete[] name;
        }

    private:
         char *name;
};

int main()
{
    test t("vikas");
    t.print();
    test t1 = t;
    t1.print();
    t1.change("ashish");
    t.print();
    t1.print();
    return 0;
}
