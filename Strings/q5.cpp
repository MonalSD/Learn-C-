//  Write a program to convert Lowercase to Uppercase using the inbuilt function.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    string str2="";
    int len=0;
    while(str[len]!='\0')
    {
        str2+=toupper(str[len]);
        len++;
    }
    cout<<"Upper case String is: "<<str2;
return 0;
}