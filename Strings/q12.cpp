//  Write a program to list vowels in a string
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    int j;
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    for(j=0;j<len;j++)
    {
        if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'||str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U')
        {
            cout<<str[j]<<" ";
        }
    }
return 0;    
}