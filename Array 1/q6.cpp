// Write a C++ program to find all elements in array of integers which have at-least two greater elements.
#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i;
    cout<<"Number of Elements:";
    cin>>n;
    cout<<"Insert Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int large=a[0];
    for(i=0;i<n;i++)
    {
        if(large<a[i])
        {
            large = a[i];
        }
    }
    int small=a[0];
    for(i=0;i<n;i++)
    {
        if(small>a[i])
        {
            small = a[i];
        }
    }
    int l=small;
    for(i=0;i<n;i++)
    {
        if(l<a[i]&&a[i]<large)
        {
            l=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==large || a[i]==l)
        {
        }
        else
        {
            cout<<a[i];
        }
    }
return 0;

}