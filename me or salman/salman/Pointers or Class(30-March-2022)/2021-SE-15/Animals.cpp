#include <iostream>
#include <string.h>
#include<conio.h>
using namespace std;

class Animal{
   public:
    string color;
    string food;
    int age;
    
    void setData(string col,string fo,int ae)
    {
        color=col;
        food=fo;
        age=ae;
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
    Animal Dog;
    Animal Cat;
    Animal Sheep;
    Animal Fox;
    Animal Rat;
    
    Dog.setData("White","Meat",16);
    Cat.setData("Black","Meat",10);
    Sheep.setData("Black&White","Grass",30);
    Fox.setData("Red","Meat",35);
    Rat.setData("Gray","Corn",20);
    
    cout<<"Detail of Cat:"<<endl;
    cout<<"Color: "<<Cat.getColor()<<endl;
    cout<<"Food:  "<<Cat.getFood()<<endl;
    cout<<"Age:   "<<Cat.getAge()<<" Years"<<endl<<endl;
    
    cout<<"Detail of Sheep:"<<endl;
    cout<<"Color: "<<Sheep.getColor()<<endl;
    cout<<"Food:  "<<Sheep.getFood()<<endl;
    cout<<"Age:   "<<Sheep.getAge()<<" Years"<<endl<<endl;
    
    cout<<"Detail of Fox:"<<endl;
    cout<<"Color: "<<Fox.getColor()<<endl;
    cout<<"Food:  "<<Fox.getFood()<<endl;
    cout<<"Age:   "<<Fox.getAge()<<" Years"<<endl<<endl;
    
    cout<<"Detail of Dog:"<<endl;
    cout<<"Color: "<<Dog.getColor()<<endl;
    cout<<"Food:  "<<Dog.getFood()<<endl;
    cout<<"Age:   "<<Dog.getAge()<<" Years"<<endl<<endl;
    
    cout<<"Detail of Rat:"<<endl;
    cout<<"Color: "<<Rat.getColor()<<endl;
    cout<<"Food:  "<<Rat.getFood()<<endl;
    cout<<"Age:   "<<Rat.getAge()<<" Years"<<endl;
    
    return 0;
}
