// Example program
#include <iostream>
#include <string>

using namespace std;

class shape{
private:
	int posx;
	int posy;
public:
	shape(){
		cout <<"shape constructor called"<<"\n";
	}
	~shape(){
		cout <<"shape destructor called"<<"\n";
	}
	void erase();
	void move();
protected:
	int area=0;
};

class circle : public shape{
private:
	int x=0;
	int y=0;
public:
	circle(){
		cout <<"circle constructor called"<<"\n";
	}
	~circle(){
		cout <<"circle destructor called"<<"\n";
	}
	int inherit();
protected:
	int radius;
};
void shape ::erase(){
	cout <<"erase called"<<"\n";
}


void shape ::move(){
	cout <<"move called"<<"\n";
}
int circle ::inherit(){

	cout <<"erase called"<<"\n";
	return area;
}
class ellipse : public circle{
private:
	int a=0;

public:
	ellipse(){
		cout <<"ellipse constructor called"<<"\n";
	}
	~ellipse(){
		cout <<"ellipse destructor called"<<"\n";
	}
protected:
	int dia;
};

int main(){
	circle c;
	int z =c.inherit();
	cout <<"z="<<z<<endl;
	shape *sh= new shape;
	sh->move();
	circle *cl =new circle;
	cl->move();
}
