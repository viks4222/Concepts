#include <iostream>

using namespace std;

static int gCounter = 0;

/* Static within a function, scope limited to function*/
void fun(){
	static int counter = 0;
	cout <<"counter:"<<counter<<endl;
	counter ++ ;
	gCounter ++;
}

class print{
private:
	print();
	print *mInstance;
public:
	~print();
	void printJob(int numPages);
	void getInstance();
};

int main(int argc, char *argv[]){
	for(int i=0; i<100; i++){
		fun();
	}
	cout<<"gCounter"<<gCounter<<endl;
	return 0;
}
