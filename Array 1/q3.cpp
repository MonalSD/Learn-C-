// Write a C++ program to find second largest element in a given array of integers.
#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i;
    cout<<"Number of elements";
    cin>>n;
    cout<<"Insert Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s1=a[0];
    for(i=0;i<n;i++)
    {
        if(s1>a[i])
        {
            s1=a[i];
        }
    }
    int l1=a[0];
    for(i=0;i<n;i++)
    {
        if(l1<a[i])
        {
            l1=a[i];
        }
    }
    int l2=s1;
    for(i=0;i<n;i++)
    {
        if(l2<a[i] && a[i]<l1)
        {
            l2=a[i];
        }
    }
    cout<<l2;
return 0;
}