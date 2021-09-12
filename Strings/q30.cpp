// Write a program to remove all uppercase characters in the string.
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
    int i=0;
    while(str[i]!='\0')
    {
    if(str[i]>='A' && str[i]<='Z')
    {
        int j;
        for(j=i;j<len;++j)
        {
            str[j]=str[j+1];
        } 
        
    }
    else
    i++;
    }
    cout<<"after removing: "<<str;
return 0;

}