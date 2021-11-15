// Write a Program to print prime numbers from 1 to n using recursion.
#include<iostream>
using namespace std;

int prime(int i,int n)
{
    if(n==i)
    return 0;
    else
     if(n%i==0)
     return 1;
     else
     return prime(i+1,n);
}

int main()
{
    int n,i;
    cout<<"Enter N value: ";
    cin>>n;
    cout<<"Prime number between 1 to n are: ";
    for(i=2;i<=n;i++)
    if(prime(2,i+1)==0)
     cout<<i<<" ";
    return 0;

}