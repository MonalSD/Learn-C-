// Write a Program to Print even numbers in a given range using recursion.
#include<iostream>
using namespace std;

int even(int a,int b)
{
    if(a>b)
    return 0;
    cout<<a<<" ";
    return even(a+2,b);
}

int main()
{
    int a=2,b;
    cout<<"Enter your limit: ";
    cin>>b;
    cout<<"EVEN No. in Range are: "<<even(a,b);
    return 0;
}