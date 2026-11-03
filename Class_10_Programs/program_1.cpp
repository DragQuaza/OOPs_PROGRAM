// Multiple-inheritance , Function-overriding... (program with error int i is ambiguious...) ERROR

#include<iostream>
using namespace std;

class A
{
public:
    int i;
};

class B:public A
{
public:
    int j;
};

class C: public A
{
    public:
    int k;
};

class D: public B,public C
{
public:
    int sum;
};

int main()
{
    D obj1;
    obj1.i=10;//
    obj1.j=20;
    obj1.k=30;
    obj1.sum=obj1.i+obj1.j+obj1.k;
    cout<<"The Sum is:   "<<obj1.sum<<endl;
}
/*
Name          : DEBANJAN MAITY
Roll No       : 447
Division      : D
SRN           : 01FE23BEC211
Semester      : VII
*/

