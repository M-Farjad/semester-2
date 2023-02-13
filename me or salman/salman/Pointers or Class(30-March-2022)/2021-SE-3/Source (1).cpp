 #include<iostream>
using namespace std;
int main() {
	int* xptr, * yptr, * sumptr, x, y, sum;
	xptr = &x;
	yptr = &y;
	sumptr = &sum;
	cout << "Enter the value of x: ";
	cin >> *xptr;
	cout << "\nEnter the value of y: ";
	cin >> *yptr;
	sum = x + y;
	cout << "\n The sum of " << *xptr << " and " << *yptr << " is " << *sumptr;
	return 0;
}
