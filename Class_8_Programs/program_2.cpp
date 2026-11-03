/*
Name          : DEBANJAN MAITY
Roll No       : 447
Division      : D
SRN           : 01FE23BEC211
Semester      : VII
*/

// Multi-level inheritance using constructor initializer lists.
#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;

public:
    Person(const string& personName) : name(personName) {}

    void display1() const {
        cout << "Person Class" << endl;
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
protected:
    string srn;

public:
    Student(const string& studentName, const string& studentSrn)
        : Person(studentName), srn(studentSrn) {}

    void display2() const {
        cout << "Student Class" << endl;
        cout << "SRN: " << srn << endl;
    }
};

class IT_Student : public Student {
    float spi;

public:
    IT_Student(const string& studentName, const string& studentSrn, float studentSpi)
        : Student(studentName, studentSrn), spi(studentSpi) {}

    void display3() const {
        cout << "IT_Student Class" << endl;
        cout << "SPI: " << spi << endl;
    }
};

int main() {
    IT_Student student("DEBANJAN MAITY", "01FE23BEC211", 8.57f);

    student.display3();
    student.display2();
    student.display1();

    return 0;
}

