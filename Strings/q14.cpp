// Write a program to reverse a string 
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    int i=0;
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    cout<<"After reversing string is: ";
    for(i=len-1;i>=0;i--)
    {
        cout<<str[i];
    }
return 0;
}