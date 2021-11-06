// Write a Program to Print odd numbers in a given range using recursion.
#include<iostream>
using namespace std;

int odd(int a,int b)
{
    if(a>b)
    return 0;
    cout<<a<<" ";
    return odd(a+2,b);
}

int main()
{
    int a=1,b;
    cout<<"Enter your limit: ";
    cin>>b;
    cout<<"EVEN No. in Range are: "<<odd(a,b);
    return 0;
}