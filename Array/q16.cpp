// Write a program to print the frequency of all numbers in an array.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,feq[i],b,a;
    cout<<"Size of array:";
    cin>>n; 
    cout<<"Insert elements of Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int p=a[0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        if(p==a[j])
        {
            feq[i];  
        }
        }
    }
    cout<<a[i]<<"Occurs "<<feq<<"times";
return 0;
}