// Write a cpp program , Define class Rectangle with members width and height. Also define function to set_values(w,l)
// to initialize the members, area() to calculate area. Demonstrate class Rectangle for two objects.

#include<iostream>
using namespace std;

class Rectangle
{
    float width,height,a;
public:
    void set_values(float w,float l)
    {
        width=w;
        height=l;
    }

    void area()
    {
        a=width*height;
    }

    void display()
    {
        cout<<"The area of the Rectangle is : "<<a;
    }
};


int main()
{
    Rectangle r1;
    float w,l;
    cout<<"Enter the Width of the rectangle :"<<endl;
        cin>>w;
        cout<<"Enter the Length of the rectangle :"<<endl;
        cin>>l;
    r1.set_values(w,l);
    r1.area();
    r1.display();
    return 0;
}
/*
Name          : DEBANJAN MAITY
Roll No       : 447
Division      : D
SRN           : 01FE23BEC211
Semester      : VII
*/

