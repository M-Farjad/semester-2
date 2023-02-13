#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x=0,y=0,sum=0;
    
    int *aPtr=&x;
    int *bPtr=&y;
    int *sumPtr=&sum;
    
    cout<<"Enter the first value:";
    cin>>*aPtr;
    cout<<"Enter the Second Value:";
    cin>>*bPtr;
    *sumPtr=(*aPtr)+(*bPtr);
    cout<<"Sum is Equal to "<<*sumPtr;
    
    
    return 0;
}
