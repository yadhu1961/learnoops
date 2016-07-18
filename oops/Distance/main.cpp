#include<iostream>
#include "Distance.h"

using namespace std;

int main(int argc,char *argv[])
{
	Distance d;
	d.setInches(1.3);
	d.setFeet(10);
	cout<<"Inches: "<<d.getInches()<<endl<<"Feet: "<<d.getFeet()<<endl;
	int *ptr = (int *)&d;
	*ptr = 1;
	cout<<"after pointer manipulation"<<endl;
	cout<<"Inches: "<<d.getInches()<<endl<<"Feet: "<<d.getFeet()<<endl;
	return 0;
}

