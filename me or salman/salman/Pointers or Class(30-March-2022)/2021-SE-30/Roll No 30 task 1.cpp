#include<iostream>
using namespace std;

int* f(int*, int*);
int main() {

	int n1=0, n2=0;
	int* sum;
	cout << "Enter Values : ";
	cin >> n1 >> n2;
	cout << "Sum is : ";
	sum = f(&n1, &n2);
	cout<< *sum << endl;
	return 0;
}

int* f(int* xPtr, int* yPtr) {
	int sum;
	sum = *xPtr + *yPtr;
	return &sum;
}