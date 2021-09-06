// Write a program to print the frequency of all numbers in an array.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,j;
    cout<<"Size of array:";
    cin>>n; 
    cout<<"Insert elements of Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // Distinct elements:
    int dist[100],din=0;
    dist[0]=a[0];
    din++;
    for(i=0;i<n;i++)
    {
        int count=0;
        for(j=0;j<din;j++)
        {
        if(a[i]==dist[j])
        {
            count++;  
        }
        }
    if(count==0)
    {
        dist[din]=a[i];
        din++;
    }
    }
    // frequency:
    int f[100],feq=0;
    for(i=0;i<din;i++)
    {
        f[i]=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==dist[i])
            {
                f[i]++;
            }
        }

    }
    for(i=0;i<din;i++)
    {
        cout<<dist[i]<<" Occurs "<<f[i]<<" times."<<endl;
    }
return 0;
}