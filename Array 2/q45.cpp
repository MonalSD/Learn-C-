// Write a Program to Find the maximum product of 3 numbers in an array.
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a[100],i,n,j,product,k;
    cout<<"Size of Array: ";
    cin>>n;
    cout<<"Insert Elements in Array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int f=a[0],s=a[1],t=a[2],max=a[0]*a[1]*a[2];
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
            product=a[i]*a[j]*a[k];
            if(abs(product)>abs(max))
            {
                max=product;
                f=a[i];
                s=a[j];
                t=a[k];
            }
            }
        }
    }
cout<<"Pair of Maximum Product is ("<<f<<","<<s<<","<<t<<")";
cout<<"\nMaximum Product of 2 numbers is "<<max;
}