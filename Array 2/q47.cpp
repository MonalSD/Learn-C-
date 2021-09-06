// Write a Program to sort an array of 0s, 1s, and 2s.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,j,temp;
    cout<<"Size of Array: ";
    cin>>n;
    cout<<"Insert Elements in Array as 0,1 and 2 only: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        if(a[i]>=a[j])
        {
            temp =a[i];
            a[i] =a[j];
            a[j] =temp;
        }
    }

cout<<" Sorted Array: ";
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
return 0;
}