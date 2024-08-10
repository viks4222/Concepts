/*Program:understanding different functions of string*/

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char str[] = "my program";
    /* The strlen() function returns the length of the given string.
    */
    int size = strlen(str);
    cout <<"size of the string is :"<<size<<endl;

    char dest[20];
    char ch = 'v';
    int count = 7;
    int result;

    /* memset() is used to copy a single character to a specified number of time to an object
     * Returns the pointer to the destination string
    */
    memset(dest,ch,count);

    //string after copying
    cout <<dest<<endl;

    /* memchr() function searches the occurance of a single character in a specified no of characters
     * returns a pointer if character is found else a NULL pointer is returned
    */
    void* output = memchr(str,ch,count);

    if(output){
        cout <<"The character: "<<ch<<" is found in first "<<count<<" count of the string str"<<endl;
    }
    else{
        cout <<"The character: "<<ch<<" doesn't found in first "<<count<<" count of the string str"<<endl;
    }

    char name1[] = "vikasrokade";
    char name2[] = "vikasrokade123";

    /* The strcmp() function in C++ compares two null terminating string.
     * Returns values: a. positive if the first differing character in lhs is greater than the
     * corresponding character in rhs
     * b. negative if character in lhs  lesser than corresponding character in rhs
     * c. Zero if the strings are same.
    */
    result = strcmp(name1,name2);

    /* It compares the contents of lhs and rhs lexicographically upto a maximum of count characters.
     * Returns the values similar to the strcmp();
    */
    //count = 4;
    //result = strncmp(name1,name2,count);

    if(result>0){
        cout <<"The string: "<<name2<<" precedes the string: "<<name1<<endl;
    }
    else if(result<0){
        cout <<"The string: "<<name1<<" precedes the string: "<<name2<<endl;
    }
    else{
        cout <<"The string: "<<name1<<" and the string: "<<name2<<"are same"<<endl;
    }

     /* The memcmp() function compares a specified number of characters of
      * two pointer objects
      * Returns the values similar to the strcmp();
     */
    result = memcmp(name1,name2,count);
    if(result>0){
        cout <<"The string: "<<name2<<" precedes the string: "<<name1<<endl;
    }
    else if(result<0){
        cout <<"The string: "<<name1<<" precedes the string: "<<name2<<endl;
    }
    else{
        cout << "First " << count << " characters of " << name1 << " and " << name2 << " are same" << endl;
    }

    char name3[] = "Hello ";

    /* The strcat() function in C++ appends a copy of a string to the end of another string.
     * Returns dest, the pointer to the destination string.
    */
    strcat(name3,name1);
    cout <<"string after appending:"<<name3<<endl;

    char name4[] = "Hey ";
    count = 4;

    /*This function appends a number of specified characters(provided as count) from
     * one string to the end of another string
     * Returns dest, the pointer to the destination string.
    */
    strncat(name4,name2,5);
    cout <<"string after appending:"<<name4<<endl;

    size = strlen(name4);
    char *name5;
    name5 = new char(size+1);

    /*This function is used to copy character string from one string(source) to another string(dest)*/
    strcpy(name5,name4);
    cout <<"string after copying:"<<name5<<endl;

    size = strlen(name5);
    char *name6;
    name6 = new char(size+1);
    /*The strncpy() function in C++ copies a specified bytes of characters from
     * source to destination.
     * Returns dest, the pointer to the destination
    */
    strncpy(name6,name5,3);
    cout <<"string after copying:"<<name6<<endl;

    size = strlen(name5);
    char *name7;
    name7 = new char(size+1);

    /* The memcpy() function in C++ copies a specified bytes of data from source to the destination.
     * Returns dest, the memory location of the destination
    */
    memcpy(name7,name5,5);
    cout <<"string after copying:"<<name7<<endl;


    return 0;
}


