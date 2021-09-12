// Write a program to count the numbers of the word in a string
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    str=""+str;
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    int i=0;
    int count=1,flag=0;
    for(i=0;i<len;i++)
    {
        if(str[i]==' ' && str[i+1]!=' ')
        count++;
    }
    cout<<"Word present in a string are: "<<count;
return 0;
}