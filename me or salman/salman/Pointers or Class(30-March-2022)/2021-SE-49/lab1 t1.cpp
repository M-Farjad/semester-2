#include<iostream>
using namespace std;
int main()
{
	int x,y,sum;
	int*xptr=&x;
	int*yptr=&y;
	int*sumptr=&sum;
	
	cout<<"Enter value for x: ";
	cin>>*xptr;
	cout<<"Enter value for y: ";
	cin>>*yptr;
	
	*sumptr=*xptr+*yptr;
	cout<<"sum of both numbers is: "<<*sumptr;
	
	
	
	
	return 0;
	
	
}
