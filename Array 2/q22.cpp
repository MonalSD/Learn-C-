// Write a program to delete a specified integer in an array
#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i;
    cout<<"Size of array:";
    cin>>n; 
    cout<<"Insert elements of Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Element to be deleted:";
    int m;
    cin>>m;
    int position;
    for(i=0;i<n;i++)
    {
        if(m==a[i])
        {
            position=i;
        }
    }
    for(i=position;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;

}