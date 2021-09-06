// Write a program to Find the Minimum difference between two elements in an array.
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a[100],i,n,j,temp,sub;
    cout<<"Size of Array: ";
    cin>>n;
    cout<<"Insert Elements Array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int f=a[0],s=a[1],min_sub=a[1]-a[0];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
        sub=a[i]-a[j];
        if(abs(sub)<abs(min_sub))
        {
            min_sub=sub;
            f=a[i];
            s=a[j];
        }
        }
    }
cout<<" Minimum difference between two Element is : "<<min_sub;
}
