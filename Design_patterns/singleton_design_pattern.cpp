
//Example program: singleton printer
#include <iostream>

using namespace std;

class printer{
    private:
        int nP;                                 //No of pages to be printed for current print
        static printer *pInstance;
    public:
        static int nTrayPages;
        static printer& getInstance(){
            if(!pInstance){
                pInstance = new printer();
            }
            else{
                cout<<"Already an instasnce is present"<<endl;
            }
            return *pInstance;
        }
        void print(int pages){
            nP = pages;
           cout<<"executing printjob for "<<nP<<" pages"<<endl;
        }
};

int printer::nTrayPages = 500;                //defination outside the class for nTrayPages data member
printer* printer::pInstance = NULL;

int main(){
    printer::getInstance().print(10);
    return 0;
}
