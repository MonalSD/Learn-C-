// Write a Program to Find the length of the string using recursion.
#include<iostream>
#include<string>
using namespace std;

int length(string str,int i)
{
    if(str[i] =='\0')
    return 0;

    else
    return (1+length(str,i+1));
}

int main()
{
    string str;
    cout<<"Enter your String:";
    getline(cin, str);
    cout<<"Length of the String is: "<<length(str,0);
    return 0;
}
