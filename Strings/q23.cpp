// Write a program to concatenate two strings.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1,str2;
    cout<<"Enter String1: ";
    getline(cin,str1);
    cout<<"Enter String2: ";
    getline(cin,str2);
    string str3= str1+" "+str2;
    cout<<"After concatenate string is:";
    cout<<str3;
return 0;

}