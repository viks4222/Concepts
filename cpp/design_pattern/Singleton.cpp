// Example program
#include <iostream>
#include <cstring>

using namespace std;

class singleton{
private:
    static singleton* singleInstance;   //instance is kept private so that only created through class method
                                        //and static so as to be accessed by static method
    static bool instanceFlag;
    singleton(){                        //constructor is private so that object can't be created outside.

    }
public :
    static singleton *getInstance();    //public static get instance method so object can be accessed outside class
};
bool singleton::instanceFlag =false;
 singleton* singleton::singleInstance = 0;  //static  member defination outside class
 singleton* singleton::getInstance(){       //static function defination outside class

     if(instanceFlag == NULL){            //check so that there will always only one instance
        singleInstance = new singleton();
        return singleInstance;
    }
    else{
        return singleInstance;
    }
}
int main()
{
    singleton *s = singleton::getInstance();  //get instance
}
