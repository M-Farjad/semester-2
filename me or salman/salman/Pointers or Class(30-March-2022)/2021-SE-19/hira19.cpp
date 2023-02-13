#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x, y, sum;
	int* ptr1 = &x;
	int* ptr2 = &y;
	int* ptrsum = &sum;
	cout << "Enter the value of first nbr =";
	cin >> *ptr1;
	cout << "Enter the value of second nbr =";
	cin >> *ptr2;
	*ptrsum = *ptr1 + *ptr2;
	cout << *ptr1 << "+" << *ptr2 << "=" << *ptrsum << endl;
}