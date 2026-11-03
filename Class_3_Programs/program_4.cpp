// write an c++ program to read employees record with id, name, salary and department and displaying the result.
#include<iostream>
using namespace std;

class Employee
{
    int id,salary;
    string name,dept;
public:
    Employee()
    {
        cout<<"\nEnter the Employee Name"<<endl;
        cin>>name;
        cout<<"\nEnter the Employee ID"<<endl;
        cin>>id;
        cout<<"\nEnter the Employee Department"<<endl;
        cin>>dept;
        cout<<"\nEnter the Employee Salary"<<endl;
        cin>>salary;
    }

    Employee(int a,int b,string c, string d)
    {
        name=c;
        dept=d;
        id=a;
        salary=b;
    }

    void print()
    {
        cout<<"Employee Name,ID,Salary,Department is below \n"<<endl;
        cout<<name<<"\n"<<id<<"\n"<<salary<<"\n"<<dept<<"\n\n\n"<<endl;
    }
};

int main()
{
    Employee e2(1,23000,"Kingson","ECE");
    Employee e1;

    e1.print();
    e2.print();
}
/*
Name          : DEBANJAN MAITY
Roll No       : 447
Division      : D
SRN           : 01FE23BEC211
Semester      : VII
*/

