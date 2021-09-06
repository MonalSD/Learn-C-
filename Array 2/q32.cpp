//Write a Program to Sort an array in Descending order.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,li,temp,j;
    cout<<"Size of array:";
    cin>>n; 
    cout<<"Insert elements of Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        li=i;
        for(j=i;j<n;j++)
        {
            if(a[li]<a[j])
            li=j;
        }
        temp=a[i];
        a[i]=a[li];
        a[li]=temp;
    }
    cout<<"Sorted Array:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}