// Write a Program to Find the median of two unsorted arrays.
#include<iostream>
using namespace std;

int main()
{
    int a[100],b[100],i,n,m,j,temp,c[100];
    cout<<"Size of Arra1:";
    cin>>n;
    cout<<"Insert Elements in Array1: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Size of Array2:";
    cin>>m;
    cout<<"Insert Elements in Array2: ";
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int p=n+m;
    //Merged Array:
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(i=0,j=n;j<p && i<m; i++,j++)
    {
        c[j]=b[i];
    }
    //Sorting Merged Arrays:
    for(i=0;i<n+m;i++)
    {
        int si=i;
        for(j=i;j<n+m;j++)
        {
            if (c[si]>c[j])
            {
                si=j;
            }
        }
        temp=c[i];
        c[i]=c[si];
        c[si]=temp;
    }
//to calculate median:
if(p%2 != 0)
{
   cout<<"Median: "<<(double)c[p/2];
}
else
{
    cout<<"Median: "<<(double)(c[(p-1)/2]+c[p/2])/2.0;
}
return 0;
}