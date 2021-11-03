//Using recursion, define a function to know nth term of a Fibonacci series.
#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0)
    {return 0;}

    if(n==1||n==2){
    return 1;}

    else
    {
    return (fib(n-1)+fib(n-2));}
}

int main()
{
    int p;
    cout<<"Insert N for Nth term of Fibonacci Series: ";
    cin>>p;
    for(int i=0;i<p;i++)
    {
      cout<<fib(i)<<" ";}
    return 0;
}