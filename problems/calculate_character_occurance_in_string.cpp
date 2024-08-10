
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char string[100];
    int c = 0, count[26] = {0},  x;

    cin>>string;

    while('\0' != string[c]){
        if('a' <= string[c] && 'z' >= string[c]){
         x = string[c] - 'a';
         count[x]++;
        }
        c++;
    }
    for(int i=0; i<26; i++){
        cout<<"occurances of "<<(char)(i + 'a')<<" : "<<count[i]<<endl;
    }
    return 0;
}
