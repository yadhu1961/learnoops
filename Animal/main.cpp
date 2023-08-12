#include <iostream>
#include "Animal.h"
using namespace std;

int main()
{
	Animal *a1 = new Animal();
	a1->setEyesNumber(2);
	a1->setLegsNumber(4);
	a1->setSpeed(2.5);
	cout<<"number of eyes: "<<a1->getEyesNumber()<<endl;
	cout<<"number  of legs: "<<a1->getLegsNumber()<<endl;
	cout<<"Speed of animal: "<<a1->getSpeed()<<endl;
	delete(a1);
	return 0;
}
