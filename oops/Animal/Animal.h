#include<iostream>
using namespace std;

struct Animal
{
private:
	int legs;
	int eyes;
	float speed;
public:
	Animal():legs(0),eyes(0),speed(0)
	{
		cout<<"Animal Constructor"<<endl;
	}
	~Animal()
	{
		cout<<"Animal Destructor"<<endl;
	}
	void setLegsNumber(int x);
	void setEyesNumber(int);
	void setSpeed(float);
	int getLegsNumber();
	int getEyesNumber();
	float getSpeed();
};


