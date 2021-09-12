// Write a C++ program to find the smallest element missing in a sorted array.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,temp,si,count=0,j;
    cout<<"Number of elements";
    cin>>n;
    cout<<"Insert Array:";
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
    for(i=0;i<=n;i++)
    {
        if(a[i+1]!=(a[i]+1))
        {
            count++;
            temp =a[i]+1;
        }
    }

return 0;   

}