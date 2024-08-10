#include<iostream>
#include<vector>

int findTheCulprit(vector < int > input1,vector < int > input2,int input3)
{
    //vector<int>::iterator it ;
    for(int i=0; i<input1.size();i++)
    {   
        if (input1.at(i)==input3)
        {
                return 1;
        }
    }

    for(int i=0; i<input2.size();i++)
    {   
        if (input2.at(i)==input3)
        {
                return 2;
        }
            else return -1;
    }
}


int main() {
    int output;
    int ip1_size = 0;
    cin >> ip1_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> ip1;
    int ip1_item;
    for(int ip1_i=0; ip1_i<ip1_size; ip1_i++) {
        cin >> ip1_item;
        cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
        ip1.push_back(ip1_item);
    }
    int ip2_size = 0;
    cin >> ip2_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> ip2;
    int ip2_item;
    for(int ip2_i=0; ip2_i<ip2_size; ip2_i++) {
        cin >> ip2_item;
        cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
        ip2.push_back(ip2_item);
    }
    int ip3;
    cin >> ip3;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    output = findTheCulprit(ip1,ip2,ip3);
    cout << output << endl;
    return 0;
}

