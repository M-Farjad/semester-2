#include <iostream>
#include <string.h>
#include<conio.h>
using namespace std;

class animal{
   public:
    string color;
    string food;
    int age;
    
    void setFood(string F)
    {
        food=F;
    }
    
    void setColor(string C)
    {
        color=C;
    }
    
    void setAge(int A)
    {
        age=A;
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
    animal sheep;
    animal tiger;
    animal mouse;
    animal cat;
    animal dog;
    
    sheep.setFood("Grass");
    sheep.setColor("White");
    sheep.setAge(30);
    
    tiger.setFood("Meat");
    tiger.setColor("Orange&Black");
    tiger.setAge(22);
    
    mouse.setFood("Cheese");
    mouse.setColor("Gray");
    mouse.setAge(29);
    
    cat.setFood("Meat");
    cat.setColor("Blakc&White");
    cat.setAge(14);
    
    dog.setFood("Meat");
    dog.setColor("Brown");
    dog.setAge(25);
    
    
    cout<<"Cat:"<<endl;
    cout<<"Color: "<<cat.getColor()<<endl;
    cout<<"Food:  "<<cat.getFood()<<endl;
    cout<<"Age:   "<<cat.getAge()<<" Years"<<endl<<endl;
    cout<<"__________________________________________________"<<endl;
    cout<<"Sheep:"<<endl;
    cout<<"Color: "<<sheep.getColor()<<endl;
    cout<<"Food:  "<<sheep.getFood()<<endl;
    cout<<"Age:   "<<sheep.getAge()<<" Years"<<endl<<endl;
    cout<<"__________________________________________________"<<endl;
    cout<<"Tiger:"<<endl;
    cout<<"Color: "<<tiger.getColor()<<endl;
    cout<<"Food:  "<<tiger.getFood()<<endl;
    cout<<"Age:   "<<tiger.getAge()<<" Years"<<endl<<endl;
    cout<<"__________________________________________________"<<endl;
    cout<<"Mouse:"<<endl;
    cout<<"Color: "<<mouse.getColor()<<endl;
    cout<<"Food:  "<<mouse.getFood()<<endl;
    cout<<"Age:   "<<mouse.getAge()<<" Years"<<endl<<endl;
    cout<<"__________________________________________________"<<endl;
    cout<<"Dog:"<<endl;
    cout<<"Color: "<<dog.getColor()<<endl;
    cout<<"Food:  "<<dog.getFood()<<endl;
    cout<<"Age:   "<<dog.getAge()<<" Years"<<endl;
    cout<<"__________________________________________________"<<endl;
    return 0;
}
