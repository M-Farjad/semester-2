#include <iostream>
#include <string.h>
#include<conio.h>
using namespace std;

class Animals{
   public:
    string name;
    string color;
    string food;
    int age;
    
    void setData(string n,string c,string f,int a)
    {
        name=n;
        color=c;
        food=f;
        age=a;
    }
    
    string getName()
    {
        return name;
    }
    
    string getColor()
    {
        return color;
    }
    
    string getFood()
    {
        return food;
    }
    
    int getAge()
    {
        return age;
    }
};

int main()
{
    Animals Dog;
    Animals Cat;
    Animals Lion;
    Animals Fox;
    Animals Elephant;
    
    Dog.setData("REX","Brown","Meat",9);
    Cat.setData("Luna","White","Meat",7);
    Lion.setData("Mufasa","Light Brown","Meat",20);
    Fox.setData("Zorro","Orange","Fish",12);
    Elephant.setData("Ella","Grayish","Fruit",40);
    
    cout<<"Information of Dog:"<<endl;
    cout<<"  Name:  "<<Dog.getName()<<endl;
    cout<<"  Color: "<<Dog.getColor()<<endl;
    cout<<"  Food:  "<<Dog.getFood()<<endl;
    cout<<"  Age:   "<<Dog.getAge()<<"Years"<<endl<<endl;
    
    cout<<"Detail of Cat:"<<endl;
    cout<<"  Name:  "<<Cat.getName()<<endl;
    cout<<"  Color: "<<Cat.getColor()<<endl;
    cout<<"  Food:  "<<Cat.getFood()<<endl;
    cout<<"  Age:   "<<Cat.getAge()<<"Years"<<endl<<endl;
    
    cout<<"Information of Lion:"<<endl;
    cout<<"  Name:  "<<Lion.getName()<<endl;
    cout<<"  Color: "<<Lion.getColor()<<endl;
    cout<<"  Food:  "<<Lion.getFood()<<endl;
    cout<<"  Age:   "<<Lion.getAge()<<"Years"<<endl<<endl;
    
    cout<<"Information of Fox:"<<endl;
    cout<<"  Name:  "<<Fox.getName()<<endl;
    cout<<"  Color: "<<Fox.getColor()<<endl;
    cout<<"  Food:  "<<Fox.getFood()<<endl;
    cout<<"  Age:   "<<Fox.getAge()<<"Years"<<endl<<endl;
    
    cout<<"Information of Elephant:"<<endl;
    cout<<"  Name:  "<<Elephant.getName()<<endl;
    cout<<"  Color: "<<Elephant.getColor()<<endl;
    cout<<"  Food:  "<<Elephant.getFood()<<endl;
    cout<<"  Age:   "<<Elephant.getAge()<<"Years"<<endl;
    
    return 0;
}
