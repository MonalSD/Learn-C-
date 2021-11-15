// Write a Program to Check if the given String is palindrome or not using recursion.
#include<iostream>
#include<cstring>
using namespace std;

int palli(char str[],int i,int len)
{
    static int count=0;
    if(i<strlen(str))
    if(str[i]==str[len])
    {
        count++;
        palli(str,i+1,len-1);
    }
    return count;
}
int main()
{
    char str[30];
    cout<<"Enter String: ";
    cin>>str;
    if(palli(str,0,strlen(str)-1)==strlen(str))
    cout<<"Pallindrome";
    else
    cout<<"Not Pallindrome";
    return 0;
}