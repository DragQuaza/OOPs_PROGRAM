#include<iostream>
using namespace std;

class Time
{
    int hour,minute,second;

public:
    int setTime();
    void print();
    void addTime(Time a,Time b);
};

int Time :: setTime()
{
    int x,y,z;
    cout<<"enter the time in hr : min : sec format with spaces"<<endl;
    cin>>x>>y>>z;
    hour=x;
    minute=y;
    second=z;
    return 0;
}
void Time :: print()
{
    cout<<"The Time is"<<hour<<":"<<""<<minute<<":"<<second<<endl;
}

void Time :: addTime(Time a,Time b)
{
    hour=a.hour+b.hour;
    minute=a.minute+b.minute;
    second=a.second+b.second;
}

int main()
{
    Time t1,t2,t3;
    t1.setTime();
    t2.setTime();
    t3.addTime(t1,t2);
    t1.print();
    t2.print();
    t3.print();
    return 0;
}
/*
Name          : DEBANJAN MAITY
Roll No       : 447
Division      : D
SRN           : 01FE23BEC211
Semester      : VII
*/

