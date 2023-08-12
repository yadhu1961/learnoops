#include "Distance.h"

void Distance::setFeet(int value)
{
	iFeet = value;
}

void Distance::setInches(float value)
{
	fInches = value;
}

int Distance::getFeet()
{
	return iFeet;
}

float Distance::getInches()
{
	return fInches;
}
