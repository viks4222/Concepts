#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;



int GetJumpCount(int input1,int input2,vector < int > input3)
{
    int counter = 0;
    int step= 0;

    for (vector<int>::iterator it=input3.begin();it!=input3.end();++it)
    {
        if(*it>input1)
        {
           // counter+=1;
            int temp= *it;
            while(temp>input1)
            {
                counter+=1;
                temp = temp-(input1-input2);
            }
            counter+=1;
        }
        else
        counter+=1;

    }
    return counter;
}


 int main() {
    int output;
    int ip1;
    cin >> ip1;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    int ip2;
    cin >> ip2;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    int ip3_size = 0;
    cin >> ip3_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> ip3;
    int ip3_item;
    for(int ip3_i=0; ip3_i<ip3_size; ip3_i++) {
        cin >> ip3_item;
        cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
        ip3.push_back(ip3_item);
    }
    output = GetJumpCount(ip1,ip2,ip3);
    cout << output << endl;
    return 0;
}




