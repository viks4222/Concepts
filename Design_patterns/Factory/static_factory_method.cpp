/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class TwoWheeler;
class FourWheeler;



class Vehicle{

    public:
    virtual void printVehicle() = 0;
    static Vehicle* getVehicleInstance(int vehicleType);
    static Vehicle* pVehicleInstance;
};


class TwoWheeler : public Vehicle{
    public:
        void printVehicle(){
            cout << "I am TwoWheeler" << endl;
        }
};

class FourWheeler : public Vehicle{
    public:
        void printVehicle(){
            cout << "I am FourWheeler" << endl;
        }
};

Vehicle* Vehicle :: pVehicleInstance = NULL;

Vehicle* Vehicle :: getVehicleInstance(int vehicleType){
    if(vehicleType == 1){
        pVehicleInstance = new TwoWheeler();
    }
    else if(vehicleType == 2){
        pVehicleInstance = new FourWheeler();
    }
    else {

    }
    return pVehicleInstance;
}

class client{
    public:
        Vehicle *pVehicle;
        client(int type){
            pVehicle = Vehicle :: getVehicleInstance(type);
        }

};

int main()
{
    client clientObj(2);
    clientObj.pVehicle->printVehicle();
    return 0;
}

