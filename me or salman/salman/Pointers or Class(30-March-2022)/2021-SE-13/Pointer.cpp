#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int number1, number2,sum; 
	int* ptr1 = &number1;
	int* ptr2 = &number2;
	int* ptrsum = &sum;
	cout << "enter the first number";
	cin >> *ptr1;
	cout << "enter the second number";
	cin >> *ptr2;
	*ptrsum = *ptr1 + *ptr2;
	cout << "the sum of" << *ptr1 << "+" << *ptr2 << "is" << *ptrsum << endl;
}