// Write a Program to Find the index of an element in an array.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,m,position;
    cout<<"Size of array:";
    cin>>n; 
    cout<<"Insert elements of Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Insert element to search:";
    cin>>m;
    for(i=0;i<n;i++)
    {
        if(m==a[i])
        position=i;
    }
    cout<<"Index:"<<position;
return 0;
}