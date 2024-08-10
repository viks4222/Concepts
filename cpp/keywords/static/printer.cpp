#include <iostream>

using namespace std;


class print{
private:
	print();
	static print *mInstance;
	static int mTrayPages;
	static int mInstanceCounter;
public:
	~print();
	static print* getInstance();
	static void releaseInstance();

	void printJob(int pages);
	void addTrayPages(int pages);
};

print::print(){

}

print::~print(){

}

int print::mInstanceCounter = 0;

int print::mTrayPages = 250;

print* print::mInstance = NULL;

void print::printJob(int pages){
	cout<<"print the "<<pages<<" pages"<<endl;
	if((mTrayPages - pages) > 0){
		mTrayPages = mTrayPages - pages;
		cout<<mTrayPages<<"remaining in printer"<<endl;
	}
	else if(mTrayPages - pages< 0){
		cout <<" TrayPages are less , Refill "<<(pages - mTrayPages)<<" more to print the current job"<<endl;
	}
	else{
		cout <<" No TrayPages found , Refill "<<endl;
	}
}
void print::addTrayPages(int pages){
		cout<<"Added the "<<pages<<" pages"<<endl;
		mTrayPages = mTrayPages + pages;
}

print* print::getInstance(){
	if(!mInstance)
	{
		mInstance = new print();
		mInstanceCounter ++;
	}
	cout<<"mInstanceCounter:"<<mInstanceCounter<<endl;
	return mInstance;
}

void print::releaseInstance(){
	if(mInstance)
	{
		delete mInstance;
		mInstanceCounter --;
	}
	cout<<"mInstanceCounter:"<<mInstanceCounter<<endl;
}

int main(){
	print *p = print::getInstance();
	p->printJob(3);
	p->printJob(100);
	p->printJob(200);
	return 0;
}
