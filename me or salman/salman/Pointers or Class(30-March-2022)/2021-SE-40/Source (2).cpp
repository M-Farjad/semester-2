#include<iostream>
#include<string>
using namespace std;
class Animal
{
	string name;
	string colour;
	int age;
public:
	void setname(string n)
	{
		name = n;
	}
	void setcolour(string c)
	{
		colour = c;
	}
	void setage(int a)
	{
		age = a;
	}
	string getname() {
		return name;
	}
	string getcolour() {
		return colour;
	}
	int getage() {
		return age;
	}

};
int main()
{
	Animal Dog, Cat, Horse, Tiger, Rat;
	Cat.setname("CMC");
	Cat.setcolour("Brown");
	Cat.setage(05);
	Horse.setname("Bazal");
	Horse.setcolour("White");
	Horse.setage(8);
	Dog.setname("Tommy");
	Dog.setcolour("Black");
	Dog.setage(5);
	Tiger.setname("Akshy Kumar");
	Tiger.setcolour("Yellow");
	Tiger.setage(7);
	Rat.setname("jerry");
	Rat.setcolour("Black");
	Rat.setage(3);
	cout << "     This is about Cat    " << endl;
	cout << "Name of Cat is " << Cat.getname() << endl;
	cout << "Colour of Cat is " << Cat.getcolour() << endl;
	cout << "Age of cat is " << Cat.getage() << endl;

	cout << "     This is about Horse   " << endl;
	cout << "Name of Horse is " << Horse.getname() << endl;
	cout << "Colour of Horse is " << Horse.getcolour() << endl;
	cout << "Age of Horse is " << Horse.getage() << endl;

	cout << "       This is about Dog    " << endl;
	cout << "Name of Dog is " << Dog.getname() << endl;
	cout << "Colour of Dog is " << Dog.getcolour() << endl;
	cout << "Age of Dog is " << Dog.getage() << endl;
	
	cout << "       This is about Tiger    " << endl;
	cout << "Name of Tiger is " << Tiger.getname() << endl;
	cout << "Colour of Tiger is " << Tiger.getcolour() << endl;
	cout << "Age of Tiger is " << Tiger.getage() << endl;

	cout << "       This is about Rat    " << endl;
	cout << "Name of Rat is " << Rat.getname() << endl;
	cout << "Colour of Rat is " << Rat.getcolour() << endl;
	cout << "Age of Rat is " << Rat.getage() << endl;

	return 0;
}


