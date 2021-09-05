// Write a program to sort the elements of an array.
#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,j,si,temp;
    cout<<"Size of array:";
    cin>>n; 
    cout<<"Insert elements of Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        si=i;
        for(j=i;j<n;j++)
        {
            if(a[si]>a[j])
            {
                si=j;
            }
        }
        temp=a[i];
        a[i]=a[si];
        a[si]=temp;
    }
    cout<<"Sorted Array:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}