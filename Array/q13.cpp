//  Write a program to print array elements in reverse order.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n;
    cout<<"Size of array:";
    cin>>n; 
    cout<<"Insert elements of Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int p=a[0];
    cout<<"Array elements in reverse order:";
    for(i=n-1;i>=0;i--)
    {
        p = a[i];
        cout<<p<<" ";
    }
return 0;
}