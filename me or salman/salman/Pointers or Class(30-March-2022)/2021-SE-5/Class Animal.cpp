#include<iostream>
#include<string>
using namespace std;

class animal {
	string color;
	double weight;
	double speed;
public:
	void setColor(string c) {
		color = c;
	}
	void setWeight(double w) {
		weight = w;
	}
	void setSpeed(double s) {
		speed = s;
	}
	string getColor() {
		return color;
	}
	double getWeight() {
		return weight;
	}
	double getSpeed() {
		return speed;
	}
};


int main() {
	animal cat, dog, rat, horse, lion;
	cat.setColor("white");
	cat.setSpeed(10);
	cat.setWeight(2.13);
	lion.setColor("orrange");
	lion.setSpeed(440);
	lion.setWeight(60);

	cout << "Color of cat is " << cat.getColor() << endl;
	cout << "Weight of cat is " << cat.getWeight() << endl;
	cout << "Speed of cat is " << cat.getSpeed() << endl;
	cout << endl;

	cout << "Color of lion is " << lion.getColor() << endl;
	cout << "Weight of lion is " << lion.getWeight() << endl;
	cout << "Speed of lion is " << lion.getSpeed() << endl;
	cout << endl;
}