// Write a C++ program to find the largest three elements in an array.
#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i;
    cout<<"Insert Number of elements in Array:";
    cin>>n;
    cout<<"Insert Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=a[0];
    for(i=0;i<n;i++)
    {
        if(l<a[i])
        {
            l=a[i];
        }

    }
    cout<<l;
    int l2=a[0];
    for(i=0;i<n;i++)
    {
        if(l2<a[i] && a[i]<l)
        {
            l2=a[i];
        }

    }
    cout<<l2;
    int l3=a[0];
    for(i=0;i<n;i++)
    {
        if(l3<a[i] && a[i]<l2)
        {
            l3=a[i];
        }

    }
    cout<<l3;
return 0;
}