#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    //To print a string without using a semi colon
    if(printf("Hello World\n")){
        //Do nothing
    }
    //To print semicolon  without using a semi colon
    if(printf("%c\n", 59)){   //use ascii value of semicolon
        //do nothing
    }
    return 0;
}

