//  Write a program to find the length of the string without using the inbuilt function.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    int i=0;
    cout<<"Enter String: ";
    getline(cin,str);
    while(str[i]!='\0')
    {
        i++;
    }
    cout<<"length of string:"<<i;
return 0;
}