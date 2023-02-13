#include<iostream>
#include<string>
using namespace std;

int main() {
	int x, y, sum;      //Declaring three variables
	int* xPtr, * yPtr, * sumPtr;		//Declaring three pointers
	//Passing addresses of variables to Pointers
	xPtr = &x;
	yPtr = &y;
	sumPtr = &sum;

	cout << "Enter first value : ";
	cin >> *xPtr;
	cout << "Enter second value : ";
	cin >> *yPtr;
	//Adding Values
	*sumPtr = *xPtr + *yPtr;
	cout << *xPtr << " + " << *yPtr << " = " << *sumPtr << endl;
}
