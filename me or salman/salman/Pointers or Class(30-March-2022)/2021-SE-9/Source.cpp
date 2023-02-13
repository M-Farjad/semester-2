// HEADER FILES
#include<iostream>
#include<conio.h>
using namespace std;

// MAIN FUNCTIION
int main()
{
	//DECLAIRING SIMPLE VARIABLES
	int x=0, y=0, sum=0;
	//DECLAIRING POINTER VARIABLES
	int* xPtr, * yPtr, * sumPtr;
	//POINTER POINTERS TO VARIABLES
	xPtr = &x;
	yPtr = &y;
	sumPtr = &sum;
	//TAKING INPUT
	cout << "\n Enter value of x = ";
	cin >> *xPtr;
	cout << "\n Enter value of  y = ";
	cin >> *yPtr;
	//DOING SUM
	*sumPtr = *xPtr + *yPtr;
	// GIVING OUTPUT
	cout << "\n the sum of x and y is = " << sum;
	_getch();
}