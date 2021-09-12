// Write a Program to Check if a string contains at least one Number or Not.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    int len=str.length();
    int flag=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            flag =1;
        }
    }
    if(flag)
    cout<<"string contains at least one Number";
    else
    cout<<"string doesn't contain Number";
return 0;
}