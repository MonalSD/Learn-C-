// Write a Program to reverse a given string using recursion.
#include<iostream>
using namespace std;

void rev(char str[],int i,int s)
{
    char temp;
    temp = str[i];
    str[i]=str[s-i];
    str[s-i]=temp;

    if(i == s/2)
    return ;
    else
    rev(str,i+1,s);
}

int main()
{
    char str[100];
    int size;
    cout<<"Enter a string: ";
    cin>>str;
    size=0;
    while(str[size]!='\0')
    {
        size++;
    }
    cout<<"After Reversing: ";
    rev(str,0,size);
    return 0;
}