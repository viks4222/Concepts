#include <iostream>
#include <string>

using namespace std;

void reverse(const string& arg){

    size_t numOfChar = arg.size();
    if(numOfChar == 1){
        cout<<arg<<endl;
    }
    else{
        cout<<arg[numOfChar-1];
        reverse(arg.substr(0,numOfChar-1));
    }
}

void reverseSentence(const string& arg){
    size_t
}

int main(){

    string str;
    getline(cin,str);
    reverse(str);
    return 0;
}
