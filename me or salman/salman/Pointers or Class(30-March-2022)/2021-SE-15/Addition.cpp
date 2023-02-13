#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x,y,sum;
    x=0;
    y=0;
    sum=0;
    int *xPtr=&x;
    int *yPtr=&y;
    int *addPtr=&sum;
    
    cout<<"Enter the any two value:";
    cin>>*xPtr>>*yPtr;
    *addPtr=(*xPtr)+(*yPtr);
    cout<<*xPtr<<"+"<<*yPtr<<"="<<*addPtr<<endl;
    cout<<"Sum is Equal to "<<*addPtr;
    
    
    return 0;
}
