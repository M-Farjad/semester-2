#include<cstdlib>
#include"FeetInches.h"
using namespace std;

//simplify() definition
void FeetInches::simplify()
{
	if (inches >= 12)
	{
		feet += (inches / 12);
		inches = inches % 12;
	}
	else if(inches<0)
	{
		feet -= ((abs(inches) / 12) + 1);
		inches = 12 -(abs(inches) % 12);
	}
}
//Addition
FeetInches FeetInches::operator+(FeetInches& obj)
{
	FeetInches temp;
	temp.inches = inches + obj.inches;
	temp.feet = feet + obj.feet;
	temp.simplify();
	return *this;
}

//subtraction
FeetInches FeetInches::operator-(FeetInches& obj)
{
	FeetInches temp;
	temp.inches = inches - obj.inches;
	temp.feet = feet - obj.feet;
	temp.simplify();
	return *this;
}