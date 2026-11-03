// write a c++ program to create a class Distance having data members feet and inch. create parameterized constructor to initialize members feet and inch.
#include<iostream>
using namespace std;

class Distance
{
    int feet,inch;
public:
    void display();
    Distance(int x,int y)
    {
        feet=x;
        inch=y;
    }
};

void Distance::display()
{
    cout<<"The entered distance is "<<feet<<"ft "<<inch<<"in"<<endl;
}

int main()
{
    int x,y;
    Distance d1(3,56);
    d1.display();
    return 0;
}
/*
Name          : DEBANJAN MAITY
Roll No       : 447
Division      : D
SRN           : 01FE23BEC211
Semester      : VII
*/

