#include <iostream>
#include <string>
using namespace std;
class Animal
{


    string name;
    string colour;
    string weight;
    string footcolor;
    int age;
public:
    void setname(string n)
    {
        name = n;
    }
    void setcolour(string sc)
    {
        colour = sc;
    }
    void setweight(string w)
    {
        weight = w;
    }
    void setfootcolour(string e)
    {
        footcolor = e;
    }
    void setage(int i)
    {
        age = i;
    }
    string getname()
    {
        return name;
    }
    string getcolour()
    {
        return colour;
    }
    string getweight()
    {
        return weight;
    }
    string getfootcolor()
    {
        return footcolor;
    }
    int getage()
    {
        return age;
    }


};
int main() {
    Animal dog, cat, monkey, lion, rabbot;






    dog.setname("Tommy");
    dog.setcolour("Black");
    dog.setweight("7kg");
    dog.setfootcolour("Blue");
    dog.setage(4);
    cout << "Name of animal is: " << dog.getname() << endl;
    cout << "Skin colour of animal is: " << dog.getcolour() << endl;
    cout << "Weight of animal is:" << dog.getweight() << endl;
    cout << "Eyecolour is: " << dog.getfootcolor() << endl;
    cout << "Age of Animal is: " << dog.getage() << endl;
    cout << "****************" << endl;



    cat.setname("mimi");
    cat.setcolour("white");
    cat.setweight("2kg");
    cat.setfootcolour("black");
    cat.setage(4);
    cout << "Name of animal is: " << cat.getname() << endl;
    cout << "Skin colour of animal is: " << cat.getcolour() << endl;
    cout << "Weight of animal is:" << cat.getweight() << endl;
    cout << "Eyecolour is: " << cat.getfootcolor() << endl;
    cout << "Age of Animal is: " << cat.getage() << endl;
    cout << "****************" << endl;

    monkey.setname("harry");
    monkey.setcolour("brown");
    monkey.setweight("5kg");
    monkey.setfootcolour("brown and black");
    monkey.setage(4);
    cout << "Name of animal is: " << monkey.getname() << endl;
    cout << "Skin colour of animal is: " << monkey.getcolour() << endl;
    cout << "Weight of animal is:" << monkey.getweight() << endl;
    cout << "Eyecolour is: " << monkey.getfootcolor() << endl;
    cout << "Age of Animal is: " << monkey.getage() << endl;
    cout << "****************" << endl;




    lion.setname("lappy");
    lion.setcolour("yellow");
    lion.setweight("6kg");
    lion.setfootcolour("Black");
    lion.setage(4);
    cout << "Name of animal is: " << lion.getname() << endl;
    cout << "Skin colour of animal is: " << lion.getcolour() << endl;
    cout << "Weight of animal is:" << lion.getweight() << endl;
    cout << "Eyecolour is: " << lion.getfootcolor() << endl;
    cout << "Age of Animal is: " << lion.getage() << endl;
    cout << "****************" << endl;




    rabbot.setname("roro");
    rabbot.setcolour("pink");
    rabbot.setweight("1kg");
    rabbot.setfootcolour("white");
    rabbot.setage(4);
    cout << "Name of animal is: " << rabbot.getname() << endl;
    cout << "Skin colour of animal is: " << rabbot.getcolour() << endl;
    cout << "Weight of animal is:" << rabbot.getweight() << endl;
    cout << "Eyecolour is: " << rabbot.getfootcolor() << endl;
    cout << "Age of Animal is: " << rabbot.getage() << endl;
    cout << "****************" << endl;



}