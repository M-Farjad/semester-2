#include<iostream>
#include<string>
using namespace std;

class Animal {
public:
	string color;
	string food;
	int age;
	Animal(string c, string f, int a) {
		color = c;
		food = f;
		age = a;
	}
};


int main() {
	Animal cat("red", "milk", 10);
	Animal dog("black", "meat", 5);
	Animal parrot("green", "guvava", 2);
	Animal rabbit("white", "carrot", 3);
	Animal fish("grey", "candies", 1);

	cout << "DETAILS OF CAT" << endl;
	cout << "Color = " << cat.color << endl;
	cout << "Food = " << cat.food << endl;
	cout << "Age = " << cat.age << endl;
	cout << endl;

	cout << "*************************" << endl;
	cout << "DETAILS OF DOG" << endl;
	cout << "Color = " << dog.color << endl;
	cout << "Food = " << dog.food << endl;
	cout << "Age = " << dog.age << endl;
	cout << endl;
	cout << "*************************" << endl;

	cout << "DETAILS OF PARROT" << endl;
	cout << "Color = " << parrot.color << endl;
	cout << "Food = " << parrot.food << endl;
	cout << "Age = " << parrot.age << endl;
	cout << endl;
	cout << "*************************" << endl;

	cout << "DETAILS OF RABBIT" << endl;
	cout << "Color = " << rabbit.color << endl;
	cout << "Food = " << rabbit.food << endl;
	cout << "Age = " << rabbit.age << endl;
	cout << endl;
	cout << "*************************" << endl;

	cout << "DETAILS OF FISH" << endl;
	cout << "Color = " << fish.color << endl;
	cout << "Food = " << fish.food << endl;
	cout << "Age = " << fish.age << endl;
	cout << endl;
	cout << "*************************" << endl;
}