// Write a Program to Merge two unsorted arrays of different lengths.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,b[100],m;
    cout<<"Size of array1:";
    cin>>n; 
    cout<<"Insert elements of Array1:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Size of array2:";
    cin>>m; 
    cout<<"Insert elements of Array2:";
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(i=n;i<n+m;i++)
    {
        a[i]=b[i-n];
    }
cout<<"Merged Array:";
for(i=0;i<n+m;i++)
{
    cout<<a[i]<<" ";
}
return 0;
}