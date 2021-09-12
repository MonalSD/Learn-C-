// Write a program to find the first small letter in a given string.
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
    int i;
    char ch=' ';
    for(i=0;i<len;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            ch=str[i];
            break;
        }
        else 
        continue;
    }
    cout<<"First smaller letter in a given string is: "<<ch;
return 0;

}