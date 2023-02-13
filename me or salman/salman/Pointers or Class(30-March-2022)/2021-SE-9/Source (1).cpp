#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
//DEFINING A CLASS
class Animal
{
	string name;
	string color;
	char gender;
	

public:
	void setname(string n)
	{
		name = n;
	}
	string getname()
	{
		return name;
	}
	void setcolor(string c)
	{
		color = c;
	}
	string getcolor()
	{
		return color;
	}
	void setgender(char g)
	{
		gender =g;
	}
	char getgender()
	{
		return gender;
	}
	
};

// MAIN FUNCTION
int main()
{
	//DEFING OBJECTS
	Animal hamster, cat, sparrow, cow, goat;
	
	hamster.setcolor("brown");
	cat.setcolor("black");
	sparrow.setcolor("pink");
	goat.setcolor("white");
	cow.setcolor("black&white");

	cat.setname("MANO");
	hamster.setname("john");
	sparrow.setname("joli");
	cow.setname("meena");
	goat.setname("magi");

	hamster.setgender('m');
	cat.setgender('f');
	sparrow.setgender('m');
	cow.setgender('f');
	goat.setgender('m');
	// OUTPUT
	cout << "\n all about animals is : ";
	cout << "\n HAMSTER : \n" <<"NAME: "<< hamster.getname() << endl <<"COLOR : "<< hamster.getcolor() << endl <<"GENDER: "<< hamster.getgender()<<endl;
	cout << "\n COW : \n" <<  "NAME: "<<cow.getname() << endl << "COLOR : " << cow.getcolor() << endl << "GENDER: " << cow.getgender() << endl;
	cout << "\n CAT : \n" << "NAME: " <<cat.getname() << endl << "COLOR : " << cat.getcolor() << endl << "GENDER: " << cat.getgender() << endl;
	cout << "\n SPARROW : \n" << "NAME: " << sparrow.getname() << endl << "COLOR : " << sparrow.getcolor() << endl << "GENDER: " << sparrow.getgender() << endl;
	cout << "\n GOAT : \n" << "NAME: " << goat.getname() << endl << "COLOR : " << goat.getcolor() << endl << "GENDER: " << goat.getgender();

	_getch();


}