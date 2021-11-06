// Write a Program to find the sum of n natural numbers using recursion.
#include<iostream>
using namespace std;

int sum(int n)
{
    if(n>0)
    return (n+sum(n-1));
}
int main()
{
    int a;
    cout<<"Insert n natural no.: ";
    cin>>a;
    cout<<"Sum of N natural no. is: "<<sum(a);
    return 0;
}