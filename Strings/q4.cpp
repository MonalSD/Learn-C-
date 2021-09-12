// Write a program to convert the Uppercase to lowercase using the inbuilt function.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    int len=0;
    string str2="";
    while(str[len]!='\0')
    {
        str2+=towlower(str[len]);
        len++;
    }
    cout<<"Lower case string is: "<<str2;
}