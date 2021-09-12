// Write a program to check the given string is palindrome or not.
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
    int i,count=0,j=len-1;
    for(i=0;i<len;i++)
    {
        if(str[i]==str[j])
        count++;
        j--;
    }
    if(count==len)
    {
        cout<<"It's a palindrome";
    }
    else
    cout<<"Not a palindrome";
return 0;    
}