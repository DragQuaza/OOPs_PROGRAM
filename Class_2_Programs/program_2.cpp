// write a c++ program to create a Student Class with data members name, age and display the details using an object.

#include<iostream>
using namespace std;

 class Student
 {
  string s1;
  int age;
  public:
      void SetData()
      {
        s1="DEBANJAN MAITY";
          age=21;
      }
  void DisplayData()
      {
          cout<<"Name is : "<<s1<<endl;
          cout<<"Age is : "<<age;
      }
 };

 int main()
 {
     Student s1;
     s1.SetData();
     s1.DisplayData();
     return 0;
 }
/*
Name          : DEBANJAN MAITY
Roll No       : 447
Division      : D
SRN           : 01FE23BEC211
Semester      : VII
*/

