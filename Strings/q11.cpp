// Write a program to check whether two strings are equal or not. 
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str,nstr;
    cout<<"Enter string1: ";
    getline(cin,str);
    cout<<"Enter string2: ";
    getline(cin,nstr);
    int i;
    int len=0;
    int nlen=0;
    while(str[len]!='\0')
    {
        len++;
    }
    while(nstr[nlen]!='\0')
    {
        nlen++;
    }
    if(len==nlen)
    {
        cout<<"two strings are equal.";
    }
    else
    cout<<"two strings not equal.";
  
return 0;
}