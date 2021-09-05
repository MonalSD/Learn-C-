// Write a Program to Find a pair with a given sum in the array.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,sum,j,p=0;
    cout<<"Size of array:";
    cin>>n; 
    cout<<"Insert elements of Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Insert Sum:";
    cin>>sum;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                p=1;
                cout<<"Pair with a given sum in the array are:"<<a[i]<<" and "<<a[j];
            }
        }
    }
return 0;
}