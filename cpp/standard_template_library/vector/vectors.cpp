/******************************************************************************
 *******************************************************************************/

//Ref:https://www.bogotobogo.com/cplusplus/stl_vector_list.php

#include <iostream>
#include <vector>
#include <algorithm>       //used for accessing min_element and max_element functions

using namespace std;

// Method to calculate max ele in a vector etc
int maxVal(vector<int> &vect){
	int max = 0;
	for(auto i: vect){        //range based for loop
		if(i > max){
			max = i;
		}
	}
	return max;
}

void print(vector<int> &vect){
	for(auto i: vect){
		cout<<i<<"\t";
	}
	cout<<endl;
}


void reverseVect(vector<int> &vect){
	int n = vect.size();
	int i,j = n-1;
	while(i<j){
		swap(vect[i],vect[j]);
		j--;
		i++;
		cout<<"ff";
	}
}

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}


int main()
{
	//Vector initialization
	vector<int>v1;
	vector<int>v2(v1);
	vector<int>v3(3);
	vector<int>v4(3,10);
	vector<int>v5(v4.begin(),v4.end());

	int arr[] = {1,2,3,4,5};
	vector<int>v6 (arr, arr + (sizeof(arr)/sizeof(int))); // add of starting arr ele and  add rof ending ele.

	vector<int>::iterator itr;

	for(itr = v6.begin(); itr<v6.end(); itr++){
		cout <<*itr<<"\t";
	}
	cout<<"\n";

	vector<string>colors;
	colors.push_back("red");
	colors.push_back("blue");
	colors.push_back("green");
	colors.push_back("yellow");

	vector<string>::iterator it;

	for(it = colors.begin(); it<colors.end(); it++){    //The end() returns an iterator one past the last element in a container
		cout <<*it<<"\t";
	}
	cout<<"\n";
	cout<<"size of colors: "<<colors.size()<<endl;
	cout<<"capacity of colors: "<<colors.capacity()<<endl;

	colors.pop_back();
	cout<<"size of colors after popping one color: "<<colors.size()<<endl;

	colors.clear();

	if(colors.empty()){
		cout<<"color list is empty"<<endl;
	}

	colors.push_back("pink");
	colors.push_back("black");
	colors.push_back("orange");

	for(it = colors.begin(); it<colors.end(); it++){    //The end() returns an iterator one past the last element in a container
		cout <<*it<<"\t";
	}

	cout<<"\n";
	colors.insert(colors.begin(),"purple");

	for(it = colors.begin(); it<colors.end(); it++){    //The end() returns an iterator one past the last element in a container
		cout <<*it<<"\t";
	}
	cout<<"\n";
	colors.erase(colors.begin() + 2);

	for(it = colors.begin(); it<colors.end(); it++){    //The end() returns an iterator one past the last element in a container
		cout <<*it<<"\t";
	}
	colors.reserve(20);
	cout << "sizeof colors after reerve: "<<colors.size()<<endl;
	cout << "sizeof colors after reerve: "<<colors.capacity()<<endl;

	/* This constant iterator is just like a regular iterator except that we can think of a constant iterator as providing read-only access.
	 * The iterator itself, however, can change. In other words, we can move iter all around the vector. But we can't change the value
	 * of any of the elements through iter.
	 */

	/*
Vector - Performance
Vectors grow dynamically, and every vector has a specific size. When we add a new element to a vector,
the computer reallocates memory and may even copy all of the vector elements into this new memory,
and this can cause a performance hit.

capacity()
The capacity() returns the capacity of a vector (the number of elements that a vector can hold before a program must allocate more memory for it)
The capacity() is always equal to or larger than the size. The difference between them is the number of elements
that we can add to the vector before the array under the hood needs to be reallocated.

reserve()
Before we look into the reserve() we need to know what's happening whenever a vector needs more space.
It's doing similar to realloc operation. New memory allocation, copy from the old to the new,
destruct old objects, deallocate old memory, invalidation of iterators. It's expensive!
The reserve() increases the capacity of a vector to the number supplied as an argument.
The reserve() gives us control over when a reallocation of additional memory occurs
According to Scott Meyers, the following code requires 2-18 reallocations:

vector<int> v;
for(int i = 0; i < 1000; ++i) v.push_back(i);

use resever() to reduce the costs:

vector<int> v;
v.reserve(1000);
for(int i = 0; i < 1000; ++i) v.push_back(i);


*/


	vector<int> myVect = {12,54,25,8,56,9,3,2};

	//access element at position 5
	int randAccess = myVect.at(4);
	cout<<"Ele at index 5:"<<randAccess<<endl;

	//inserting an element
	myVect.push_back(23);

	//inserting an element
	myVect.push_back(35);

	//inserting an element
	myVect.push_back(88);

	//print the vector myVect
	print(myVect);

	//inserting an element
	myVect.pop_back();

	//print the vector myVect
	print(myVect);

	int size = myVect.size();      //size of the vector
	int cap = myVect.capacity();   //Capacity of vector grows to the power of 2.

	int max = *max_element(myVect.begin(), myVect.end());
	int min = *min_element(myVect.begin(), myVect.end());

	cout<<"Size:"<<size<<"\nCapacity:"<<cap<<"\nMax:"<<max<<"\nMin:"<<min<<endl;

	reverseVect(myVect);

	//print the vector myVect
	print(myVect);

	//std library fun to reverse the vector
	reverse(myVect.begin(),myVect.end());

	//print the vector myVect
	print(myVect);
	return 0;
}





