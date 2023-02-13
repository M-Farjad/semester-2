#include<iostream>
using namespace std;
int main()
{
	int* xptr, * yptr, * sumptr, x, y, sum;
	xptr = &x;
	yptr = &y;
	sumptr = &sum;
	cout << "Enter the value of x: " << endl;
	cin >> *xptr;
	cout << "Enter the value of y: " << endl;
	cin >> *yptr;
	sum = x + y;
	cout << "The sum of " << *xptr << " and " << *yptr << "is " << *sumptr;
	return 0;

}


