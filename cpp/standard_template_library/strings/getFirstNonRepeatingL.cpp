// Example program
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

string getFirstNonRepeatingL(string str);

int main()
{
  clock_t tStart = clock();
  string str;
  string ch;
  cout << "Enter a string: ";
  getline(cin, str);
  cout << "string is " << str << "\n";
  ch=getFirstNonRepeatingL(str);
  cout <<ch<<"\n";
  sleep(1000);

    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;

}

string getFirstNonRepeatingL(string str){
    int n =str.size();
    string ch="a";
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
                if(str.at(i)==str.at(j)){
                    ch= str.at(i);
                    }
                else{
                    continue ;
                    }
            }
        }
    return ch;
}
