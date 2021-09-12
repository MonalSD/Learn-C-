// Write a program to count the number of white spaces in a sentence.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter String:";
    getline(cin,str);
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    int i,count=0;
    for(i=0;i<len;i++)
    {
        if(str[i]==' ')
        count++;
    }
    cout<<"Whitespaces are: "<<count;
return 0;    
}