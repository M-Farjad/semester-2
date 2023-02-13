#include<iostream>
#include<string>
using namespace std;

int main() {
	int num1, num2, sum;
	int* p1 = &num1;
	int* p2 = &num2;
	int* pSum = &sum;
	cout << "First number: ";
	cin >> *p1;
	cout << "Second number: ";
	cin >> *p2;
	*pSum = *p1 + *p2;
	cout << *p1 << " + " << *p2 << " = " << *pSum << endl;
}