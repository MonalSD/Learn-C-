// Write a Program to print the Fibonacci series using recursion.
#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2);
}

int main()
{
    int x;
    cout<<"Enter limit: ";
    cin>>x;
    for(int i=0;i<x;i++)
    cout<<fib(i)<<" ";
    return 0;
}