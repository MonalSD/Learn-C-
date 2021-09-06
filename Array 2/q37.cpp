//  Write a Program to Move all zeros to the end of an Array.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,j;
    cout<<"Size of Array:";
    cin>>n;
    cout<<"Insert Elements in Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[c]=a[i];
            c++;
        }
    }
    for(i=c;i<n;i++)
    {
        a[c]=0;
        c++;
    }
    cout<<"New Array:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;    
}