// Write a program to count repeated characters in a string.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    int a[100]={0},i;
    for(i=0;i<len;i++)
    {
        if(str[i]==' ')
        continue;
        a[str[i]]++;
    }
    cout<<;
}