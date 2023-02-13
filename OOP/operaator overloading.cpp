#include<iostream>
using namespace std;
class Box
{
	int length, width, height;
public:
	Box(){}
	Box(int i, int j, int k)
	{
		length = i;
		width = j;
		height = k;
	}
	friend ostream& operator <<(ostream& output, Box& obj);
	friend istream& operator >>(istream& input, Box& obj);
	friend bool operator == (Box& obj1, Box& obj2);
};
 ostream& operator <<(ostream& output, Box& obj)
{
	cout << "length: " << obj.length << " , width: " << obj.width << " , height: " << obj.height << endl;
	return output;
}
istream& operator >>(istream& input, Box& obj)
{
	cout << "enter values of object 3" << endl;
	cout << "enter length:";
	cin >> obj.length;
	cout << "enter width:";
	cin >> obj.width;
	cout << "enter height:";
	cin >> obj.height;
	return input;
}
bool operator == (Box& obj1, Box& obj2)
{
	if (obj1.length == obj2.length && obj1.width == obj2.width && obj1.height == obj2.height)
	{
		return true;
	}
	else
		return false;
}

int main()
{
	
	Box b1(1, 2, 3);
	Box b2(4, 5, 6);
	Box b3;
	cin >> b3;
	cout << b1;
	cout << b2;
	cout << "the values of obj 3 are" << endl;
	cout << b3;
	if (b1 == b2)
	{
		cout << "the objects are equal" << endl;
	}
	else
		cout << "objects are not eqaul" << endl;
	return 0;
}