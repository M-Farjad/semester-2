#include<iostream>
#include"FeetInches.h"
using namespace std;

int main() 
{
	int feet, inches;
	FeetInches first, second, third;

	//User input
	cout << "Plz enter the distance 1 in feet: ";
	cin >> feet;
	cout << "Plz enter the distance 1 in inches: ";
	cin >> inches;
	first.setfeet(feet);
	first.setinches(inches);
	cout << "Plz enter the distance 2 in feet: ";
	cin >> feet;
	cout << "Plz enter the distance 2 in inches: ";
	cin >> inches;
	second.setfeet(feet);
	second.setinches(inches);

	//Getting values
	cout << "1st Distance in feet and inches: " << endl;
	cout <<"In Feet: " << first.getfeet()<<endl;
	cout << "In Inches: " <<first.getinches()<<endl;
	cout << "1st Distance in feet and inches: " << endl;
	cout << "In Feet: " << second.getfeet()<<endl;
	cout << "In Inches: " << second.getinches()<<endl;

	//Adding
	third = first + second;
	cout << "After adding two distances in feet and inches: " << endl;
	cout << "In Feet: " << third.getfeet()<<endl;
	cout << "In Inches: " << third.getinches()<<endl;

	//Subtracting
	third = first - second;
	cout << "After subtracting two distances in feet and inches: " << endl;
	cout << "In Feet: " << third.getfeet() << endl;
	cout << "In Inches: " << third.getinches() << endl;
}