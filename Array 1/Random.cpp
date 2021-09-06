// write a c++ code to copy elements of one array to another.
#include<iostream>
using namespace std;

int main()
{
    int a[100],newa[100],i,n;
    cout<<"Number of elements:";
    cin>>n;
    cout<<"Insert Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        newa[i]=a[i];
        
    }
    cout<<"New array:";
    for(i=0;i<n;i++)
    {
        cout<<newa[i]<<" ";
    }
return 0;
}