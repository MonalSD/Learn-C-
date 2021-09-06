// Write a Program to remove an element from an array by index.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,pos;
    cout<<"Size of array:";
    cin>>n; 
    cout<<"Insert elements of Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"index of element to be deleted:";
    cin>>pos;
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    cout<<"Array after removal:";
    for(i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}