#include <iostream>
#include <string>
using namespace std;
class Animal
{

 
    string name;
    string colour;
    string weight;
    string Eyecolour;
    int age;
public:
void setnameofanimal(string n)
{ name=n;}
void setskincolour(string sc)
{ colour=sc;}
void setweightofanimal(string w)
{ weight=w;}
void seteyecolour(string e)
{ Eyecolour=e;}
int setageofanimal(int i)
{ age=i;}
string getnameofanimal()
{ return name;}
string getskincolour()
{ return colour;}
string getweightofanimal()
{return weight;}
string geteyecolour()
{ return Eyecolour;}
int getageofanimal()
{ return age;}


};
int main()
{
    Animal dog, bear,Tiger,cheetah,donkey;
    dog.setnameofanimal("Tommy");
    dog.setskincolour("Black");
    dog.setweightofanimal("7kg");
    dog.seteyecolour("Blue");
    dog.setageofanimal(4);
     cout<<"Name of animal is: "<<dog.getnameofanimal()<<endl;
     cout<<"Skin colour of animal is: "<<dog.getskincolour()<<endl;
    cout<<"Weight of animal is:"<<dog.getweightofanimal() <<endl;
    cout<<"Eyecolour is: "<<dog.geteyecolour()<<endl;
     cout<<"Age of Animal is: "<<dog.getageofanimal()<<endl;
cout<<"********************************************"<<endl;
    bear.setnameofanimal("Bear");
    bear.setskincolour("Black");
    bear.setweightofanimal("7kg");
    bear.seteyecolour("Blue");
    bear.setageofanimal(4);
     cout<<"Name of animal is: "<<bear.getnameofanimal()<<endl;
     cout<<"Skin colour of animal is: "<<bear.getskincolour()<<endl;
    cout<<"Weight of animal is:"<<bear.getweightofanimal() <<endl;
    cout<<"Eyecolour is: "<<bear.geteyecolour()<<endl;
     cout<<"Age of Animal is: "<<bear.getageofanimal()<<endl;
cout<<"********************************************"<<endl;



     Tiger.setnameofanimal("Tiger");
    Tiger.setskincolour("Black");
    Tiger.setweightofanimal("7kg");
    Tiger.seteyecolour("Blue");
    Tiger.setageofanimal(4);
     cout<<"Name of animal is: "<<Tiger.getnameofanimal()<<endl;
     cout<<"Skin colour of animal is: "<<Tiger.getskincolour()<<endl;
    cout<<"Weight of animal is:"<<Tiger.getweightofanimal() <<endl;
    cout<<"Eyecolour is: "<<Tiger.geteyecolour()<<endl;
     cout<<"Age of Animal is: "<<Tiger.getageofanimal()<<endl;
cout<<"********************************************"<<endl;



     cheetah.setnameofanimal("Cheetah");
    cheetah.setskincolour("Black");
    cheetah.setweightofanimal("7kg");
    cheetah.seteyecolour("Blue");
    cheetah.setageofanimal(4);
     cout<<"Name of animal is: "<<cheetah.getnameofanimal()<<endl;
     cout<<"Skin colour of animal is: "<<cheetah.getskincolour()<<endl;
    cout<<"Weight of animal is:"<<cheetah.getweightofanimal() <<endl;
    cout<<"Eyecolour is: "<<cheetah.geteyecolour()<<endl;
     cout<<"Age of Animal is: "<<cheetah.getageofanimal()<<endl;
cout<<"********************************************"<<endl;



     donkey.setnameofanimal("Donkey");
    donkey.setskincolour("Black");
    donkey.setweightofanimal("7kg");
    donkey.seteyecolour("Blue");
    donkey.setageofanimal(4);
     cout<<"Name of animal is: "<<donkey.getnameofanimal()<<endl;
     cout<<"Skin colour of animal is: "<<donkey.getskincolour()<<endl;
    cout<<"Weight of animal is:"<<donkey.getweightofanimal() <<endl;
    cout<<"Eyecolour is: "<<donkey.geteyecolour()<<endl;
     cout<<"Age of Animal is: "<<donkey.getageofanimal()<<endl;
cout<<"********************************************"<<endl;

    return 0;

}