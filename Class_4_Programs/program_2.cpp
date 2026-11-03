// Write a C++ program to maintain employee data with fields employe ID , name and Department for 5 employees.


// IMPORTANT """"""""""  Compare the out put of prog_2(this code) and prog_3(next code)  """""""""""

// these comparison of two codes teaches you the very important things to keep in mind like the " {{{ only one copy of a sttic variable is maintained by the class
// and it is common for all objects. "}}}




#include<iostream>
using namespace std;
class Employee
{
    static int emp_id;         //Static members are declared inside a class and defined outside the class...
    string emp_name,emp_dept;

 public:


    Employee()
    {
     /*cout<<"Enter the name of Employee "<<" :"<<endl;
     cin>>emp_name;
     cout<<"Enter the Department of Employee "<<(emp_id+1)<<" :"<<endl;
         cin>>emp_dept;*/

         emp_id++;
    }
     void display()
    {
     cout<<"Employee Details \n Employee ID: "<<emp_id; //<<"Employee Name : "<<emp_name<<"Employee Department : "<<emp_dept<<endl<<endl;
    }
/*
    ~Employee()
    {
      cout<<"destructor called";
    }
*/
};

int Employee::emp_id;               //Static members are declared inside a class and defined outside the class...

int main()
{
    Employee e1,e2,e3,e4,e5;
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e5.display();
    return 0;
}
/*
Name          : DEBANJAN MAITY
Roll No       : 447
Division      : D
SRN           : 01FE23BEC211
Semester      : VII
*/

