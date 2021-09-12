// Write a Program to Find the maximum occurring character in a given string.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    int len= str.length();
    int a[100]={0},i,max=0;
    for(i=0;i<len;i++)
    {
        if(str[i]==' ')
        continue;
        a[str[i]]++;
    }
    char ch=' ';
    for(i=0;i<len;i++)
    {
        if(a[str[i]]>=max)
        {
            max=a[str[i]];
            ch=str[i];
        }
    }
cout<<"The Maximum occurring character in a string is "<<ch;
return 0;   
}