#include <iostream>

using namespace std;

int decToBin(int n){
	int bin=0,rem,i=1;
	while(n!=0){
		rem = n%2;
		n = n/2;
		bin = bin + rem*i;
		i = i *10;
	}
	return bin;
}

int countSetBit(int n){
	int count = 0, rem;
	while(n!=0){
		rem = n%10;
		n = n/10;
		if(rem == 1){
			count ++;
		}
	}
	return count;
}

int main(){
	int num;
	cin >> num;
	int binVal = decToBin(num);
	cout<<"no of set bits: "<<countSetBit(binVal);
	return 0;
}
