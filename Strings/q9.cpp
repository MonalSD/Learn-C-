// Write a program to capitalize the first letter of every word in a string. 
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    int i;
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    for(i=0;i<len;i++)
    {
        if(i==0 || str[i-1]==' ')
        {
            str[i]=toupper(str[i]);
        }
    }
    cout<<"New string: "<<str;
    return 0;

}