// Previous code (prog_4) improved and efficient way to shorten the lines of code by not using unnecessary functions...


#include<iostream>
using namespace std;

class Rectangle
{
    float width,height;
public:

    void set_values(float w,float l)
    {
        width=w;
        height=l;
    }

    float area()
    {
        return width*height;
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
    cout<<"The Area of the Rectangle is = "<<r1.area();
    return 0;
}
/*
Name          : DEBANJAN MAITY
Roll No       : 447
Division      : D
SRN           : 01FE23BEC211
Semester      : VII
*/

