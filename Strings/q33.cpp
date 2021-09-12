// Write a program to remove all numbers in the string.
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
        if(str[i]>='0' && str[i]<='9')
        {
            for(j=i;j<len;++j)
            {
                str[j]=str[j+1];
            }
        }
        else 
        i++;
    }
cout<<"After Removing: "<<str;
return 0;
}