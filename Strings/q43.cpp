// write a program to print every character of a string twice.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        cout<<str[i]<<str[i];
    }
return 0;
}
