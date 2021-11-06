// Write a Program to find the gcd of two numbers using recursion.
#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"GCD: "<<gcd(a,b);
    return 0;
}