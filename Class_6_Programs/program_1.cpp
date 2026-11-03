// Single Level inheritance.

#include<iostream>
using namespace std;

class Animal
{
int legs=4;
public:

    void display1()
    {
        cout<<"\nLegs= "<<legs<<endl;
    }
};

class Dog: public Animal
{
    bool tail = true;
public:
    void display2()
    {
        cout<<"\nTail= "<<tail<<endl;
       // cout<<"\nLegs= "<<legs<<endl;
    }
};

int main()
{
    Animal a1;
    Dog d1;
    d1.display1();
    d1.display2();
}
/*
Name          : DEBANJAN MAITY
Roll No       : 447
Division      : D
SRN           : 01FE23BEC211
Semester      : VII
*/

