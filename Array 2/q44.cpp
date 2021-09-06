// Write a Program to Find a pair with maximum product in an array.
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a[100],i,n,j,product;
    cout<<"Size of Array: ";
    cin>>n;
    cout<<"Insert Elements in Array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int f=a[0],s=a[1],max=a[0]*a[1];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            product=a[i]*a[j];
            if(abs(product)>abs(max))
            {
                max=product;
                f=a[i];
                s=a[j];
            }
        }
    }
cout<<"Pair of Maximum Product is ("<<f<<","<<s<<")";
cout<<"\nMaximum Product of 2 numbers is "<<max;
}