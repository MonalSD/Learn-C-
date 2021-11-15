// Write a Program to check the given number is Prime or not using recursion.
#include<iostream>
using namespace std;

int pri(int i,int x)
{
    if(x==i)
    return 0;
    else
     if(x%i==0)
     return 1;
     else
     return pri(i+1,x);
}

int main()
{
    int x;
    cout<<"ENter your number: ";
    cin>>x;

    if(pri(2,x)==0)
    cout<<"Prime Number";
    else
    cout<<"Not Prime Number";
    return 0;
}