#include<iostream>
#include<string>
using namespace std;
class Animal {
	string name;
	string color;
	int age;
public:
	void setname(string n) {
		name = n;
	}
	void setage(int a) {
		age = a;
	}
	void setcolor(string c) {
		color = c;
	}
	string getname() {
		return name;
	}
	int getage() {
		return age;
	}
	string getcolor() {
		return color;
	}
};
int main() {
	Animal dog, rabbit, rat, lion, cat;
	dog.setname("puppy");
	dog.setage(5);
	dog.setcolor("Black");
	cat.setname("Ketto");
	cat.setage(5);
	cat.setcolor("Brown");
	rabbit.setname("bunny");
	rabbit.setage(4);
	rabbit.setcolor("White");
	rat.setname("chotto");
	rat.setage(2);
	rat.setcolor("Black");
	lion.setname("sheroo");
	lion.setage(4);
	lion.setcolor("Brown");
	cout << "*****DOG's INFORMATION******" << endl;
	cout << "The name of dog is: " << dog.getname() << endl;
	cout << "The color of dog is: " << dog.getcolor() << endl;
	cout << "The age of dog is: " << dog.getage() << endl;
	cout << "*****CAT's INFORMATION******" << endl;
	cout << "The name of cat is: " << cat.getname() << endl;
	cout << "The color of cat is: " << cat.getcolor() << endl;
	cout << "The age of cat is: " << cat.getage() << endl;
	cout << "*****RABBIT's INFORMATION******" << endl;
	cout << "The name of rabbit is: " << rabbit.getname() << endl;
	cout << "The color of rabbit is: " << rabbit.getcolor() << endl;
	cout << "The age of rabbit is: " << rabbit.getage() << endl;
	cout << "*****RAT's INFORMATION******" << endl;
	cout << "The name of rat is: " << rat.getname() << endl;
	cout << "The color of rat is: " << rat.getcolor() << endl;
	cout << "The age of rat is: " << rat.getage() << endl;
	cout << "*****LION's INFORMATION******" << endl;
	cout << "The name of lion is: " << lion.getname() << endl;
	cout << "The color of lion is: " << lion.getcolor() << endl;
	cout << "The age of lion is: " << lion.getage() << endl;
	return 0;
}