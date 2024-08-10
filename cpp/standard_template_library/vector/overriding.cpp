// Example program
#include <iostream>
#include <string>

using namespace std;

class cooler{
    private:
        int coolX=25;
    public:
        cooler(){ 
            cout<<"cooler constructor called"<<"\n";
            }
        ~cooler(){
            cout<<"cooler destructor called"<<"\n";            
            }    
        int cool(){
            cout<<"cooler:cool called"<<"\n";
           return coolX-=1;}
    };
    class airController:public cooler{
    private:
        int coolX=20;
        int heatX=25;
    public:
        airController(){ 
            cout<<"airController constructor called"<<"\n";
            }
        ~airController(){
            cout<<"airController destructor called"<<"\n";            
            }    
        int cool(){
            cout<<"airController:cool called"<<"\n";
           return coolX-=1;}
        int heat(){
            cout<<"airController:heat called"<<"\n";
           return heatX+=1;}           
    };
int main()
{
    airController lg;
    cout <<lg.heat();
    
}
