// # PARAMETER PASSING
// add 2 numbers by {pass by reference}.

#include<iostream>
using namespace std;

int add(int &x,int &y);

int main()
{
    int a=4,b=9,sum;
    sum=add(a,b);
    cout<<"The sum is "<<sum;
    return 0;
}

int add(int &x, int &y)
{
    int z=x+y;
    return z;
}
/*
Name          : DEBANJAN MAITY
Roll No       : 447
Division      : D
SRN           : 01FE23BEC211
Semester      : VII
*/

