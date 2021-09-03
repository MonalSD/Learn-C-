// Write a C++ program to find the second smallest elements in a given array of integers.
#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i;
    cout<<"Number of elements:";
    cin>>n;
    cout<<"Insert Arrays:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int large=a[0];
    for(i=0;i<n;i++)
    {
        if(large<a[i])
        {
            large=a[i];
        }
    }
    int small=a[0];
    for(i=0;i<n;i++)
    {
        if(small>a[i])
        {
           small=a[i];
        }
    }

    int p=large;
    for(i=0;i<n;i++)
    {
        if(p>a[i] && a[i]>small)
        {
            p=a[i];
        }
    }
    cout<<p;
}