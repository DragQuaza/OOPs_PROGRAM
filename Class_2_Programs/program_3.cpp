// write a c++ program to create a Student Class with data members name, age and display the details using an object.

// Previous code(prog_2) with {{Writing the class functions outside of class}}...


#include<iostream>
using namespace std;

 class Student
 {
  string s1;
  int age;
  public:
       void DisplayData(); //Function declaration is must else you will get this error " ||=== Build file: "no target" in "no project" (compiler: unknown) ===|
//C:\Users\Debanjan\Desktop\OOPS Elective\Programs\Class_2\prog_3.cpp|22|error: no declaration matches 'void Student::DisplayData()'|
//C:\Users\Debanjan\Desktop\OOPS Elective\Programs\Class_2\prog_3.cpp|22|note: no functions named 'void Student::DisplayData'|
//C:\Users\Debanjan\Desktop\OOPS Elective\Programs\Class_2\prog_3.cpp|9|note: 'class Student' defined here|
//C:\Users\Debanjan\Desktop\OOPS Elective\Programs\Class_2\prog_3.cpp||In function 'int main()':|
//C:\Users\Debanjan\Desktop\OOPS Elective\Programs\Class_2\prog_3.cpp|32|error: 'class Student' has no member named 'DisplayData'|
//||=== Build failed: 2 error(s), 0 warning(s) (0 minute(s), 0 second(s)) ===|

      void SetData()
      {
        s1="DEBANJAN MAITY";
          age=21;
      }
 };

 void Student::DisplayData()
      {
          cout<<"Name is : "<<s1<<endl;
          cout<<"Age is : "<<age;
      }

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

