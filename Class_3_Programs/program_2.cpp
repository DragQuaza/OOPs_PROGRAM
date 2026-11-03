#include<iostream>
using namespace std;

class Complex
{
    float real;
    int imaginary;
public:
    void setData()
    {
        int x,y;
        cout<<"Enter the Real Part and Imaginary Part by giving Spaces"<<endl;
        cin>>x>>y;
        real=x;imaginary=y;
    }

    void print()
    {
        cout<<"Complex Number= "<<real<<" + "<<imaginary<<"i "<<endl;
    }

    void addNumber(Complex a,Complex b)
    {
        real=a.real+b.real;
        imaginary=a.imaginary+b.imaginary;
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.setData();
    c2.setData();
    c3.addNumber(c1,c2);
    c3.print();
}
/*
Name          : DEBANJAN MAITY
Roll No       : 447
Division      : D
SRN           : 01FE23BEC211
Semester      : VII
*/

