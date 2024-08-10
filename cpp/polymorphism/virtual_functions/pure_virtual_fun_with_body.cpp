// Example program:Usage of pure virtual function with body
#include <iostream>
#include <string>

using namespace std;

class shape{
    public:
      virtual void draw() = 0; 
};
   
   void shape::draw(){
            cout <<"Init brush"<<endl;          
    } 
class triangle: public shape{
    public:
    void draw(){
            this->shape::draw();    
            cout <<"draw traingle"<<endl;
        };           
};


int main()
{
    triangle t;
    t.draw();
  return 0;
}
