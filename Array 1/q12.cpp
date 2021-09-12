// Write a C++ program to rearrange the elements of a given array of integers in zig-zag fashion way.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,j;
    cout<<"Number of elements";
    cin>>n;
    cout<<"Insert Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // SOrtting:
    int t;
    for(i=0;i<n;i++)
    {
        int si=i;
        for(j=i;j<n;j++)
        {
            if(a[si]>a[j])
            {
                si=j;
            }
        }
        t=a[i];
        a[i]=a[si];
        a[si]=t;
    }
    int temp=a[0];
    for(i=1;i<n-1;i=i+2)
    {
        temp = a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    cout<<"Final array: ";
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}


}