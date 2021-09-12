// Write a Program to Check if a string contains only digits or not.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    char ch;
    cout<<"Enter String: ";
    getline(cin,str);
    int len=str.length();
    int flag=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            flag++;
        }
    }
    if(flag==len)
    cout<<" string contains only digits";
    else
    cout<<" string doesn't contain only digits";

return 0;
}