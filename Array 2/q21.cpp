// Write a program to insert an element into an array at a specified position.
#include <iostream>
using namespace std;

int main()
{
    int a[100],n,i;
    cout<<"Size of array:";
    cin>>n; 
    cout<<"Insert elements of Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Element to be inserted:";
    int m;
    cin>>m;
    cout<<"Position:";
    int p;
    cin>>p;
    for(i=n;i>=p;i--)
    {
        a[i]=a[i-1];
    }
    a[p-1]=m;
    cout<<endl<<"New array:";
    for(i=0;i<=n;i++)
    {
        cout<<a[i];
    }
return 0;
}