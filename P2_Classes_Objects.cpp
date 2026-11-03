/*
------------------------------------------------------------
Program Title : Demonstration of Classes and Objects

Name          : DEBANJAN MAITY
Roll No       : 447
Division      : D
SRN           : 01FE23BEC211
Semester      : VII

Concept Used  :
- Class
- Object
- Data Members
- Member Functions

Description:
This program demonstrates the basic concept of Object
Oriented Programming by creating a class and using an
object to access its data members and member functions.
------------------------------------------------------------
*/

#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;

public:
    void setRollNo(int r) {
        rollNo = r;
    }

    void display() {
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student s;

    s.setRollNo(447);
    s.display();

    return 0;
}
