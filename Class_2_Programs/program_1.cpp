// objects
#include<iostream>
using namespace std;
class Test
{
private:
    int mark;
    float spi;
public:
    void SetData()
    {
        mark=270;
        spi=6.5;
    }
    void DisplayData()
    {
        cout<<"Mark= "<<mark<<endl;
        cout<<"spi= "<<spi;
    }
};

int main()
{
    Test o1;
    o1.SetData();
    o1.DisplayData();
    return 0;
}
/*
Name          : DEBANJAN MAITY
Roll No       : 447
Division      : D
SRN           : 01FE23BEC211
Semester      : VII
*/

