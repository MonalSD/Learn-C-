// Write a program to capitalize on the first and last letter of every word in a string. 
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    int i;
    int len =0;
    while(str[len]!='\0')
    {
        len++;
    }
    for(i=0;i<len;i++)
    {
        if(i==0||str[i-1]==' ')
        {
            str[i]=toupper(str[i]);
        }
        else if(str[i+1]==' '|| str[i+1]=='\0')
        {
            str[i]=toupper(str[i]);
        }
    }
    cout<<"New String: "<<str;
return 0;
}