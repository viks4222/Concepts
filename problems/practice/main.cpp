#include "bits/stdc++.h"

using namespace std;

int comp(int &a, int &b){
	return a<b;
}

int main(){

	int num, input;
	cin >> num;
	int query;
	vector <int> list;
	vector <int> :: iterator itr;
 	for(int i=0; i<num; i++){
		cin >> query;
		if(query == 1){
			cin >> input;
			list.push_back(input);
		}
		else if(query == 2){
			int n;
			cin >>n;
			for(int j = 0; j <list.size(); j++){
				list[j] = list[j] ^ n;
			}
		}
		else{
            itr  = min_element(list.begin(), list.end());
			cout<<*itr;
		}
	}
}