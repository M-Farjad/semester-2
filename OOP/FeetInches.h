#pragma once
class FeetInches
{
	int feet;
	int inches;
	void simplify();
public:
	FeetInches(int f = 0, int i = 0)
	{
		feet = f;
		inches = i;
		simplify();
	}

	//Mutators
	void setinches(int i)
	{
		inches = i;
		simplify();
	}
	void setfeet(int f)
	{
		feet = f;
	}

	//Accessors
	int getinches()
	{
		return inches;
	}
	int getfeet()
	{
		return feet;
	}
	FeetInches operator+(FeetInches& obj);
	FeetInches operator-(FeetInches& obj);
};