// C++ code to implement Fibonacci series
#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0)
    return 0;

    if(n ==1 || n==2)
    {
        return 1;
    }
    else 
    return (fib(n-1)+fib(n-2));
}

int main()
{
    int n;
    cout<<"Insert no. of elements in Fibonacci Series ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cout<<fib(i)<<" ";}
    return 0;
}