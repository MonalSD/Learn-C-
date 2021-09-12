// Write a program to count how many vowels present in a string.  
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
    int count=0;
    while(str[len]!='\0')
    {
        len++;
    }
    for(j=0;j<len;j++)
    {
        if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'||str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U')
        {
            count++;
        }
    }
    cout<<"No. of vowels: "<<count;
}