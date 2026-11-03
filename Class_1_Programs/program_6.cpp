// write a cpp program to find the length of the string 1.using C-style 2.using C++-style

//1.using C-style

#include<iostream>
#include<cstring> // if you use strlen(str) you need this;
using namespace std;

/*
int main()
{
    char str[]="Hello";
    int len=0,i=0;

    while(str[i]!='\0')
    {

        i+=1;
    }
    len=i;
    cout<<"The length is "<<len;
    cout<<"\n The length of string with null character is "<<len+1;
    return 0;
}
*/
// 2.using C++ Style
int main()
{
    string alpha="Hello";
    int len;
    len=alpha.length();
    cout<<"The length of the string is "<<len;
}


/*
Name          : DEBANJAN MAITY
Roll No       : 447
Division      : D
SRN           : 01FE23BEC211
Semester      : VII
*/

