// Write a program to remove all special characters in the string.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    int i=0,j;
    while(str[i]!='\0')
    {
        if(!(str[i]>='a' && str[i]<='z') && !(str[i]>='A' && str[i]<='Z') && !(str[i]>='0' && str[i]<='9') && !(str[i] =='\0'))
        {
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