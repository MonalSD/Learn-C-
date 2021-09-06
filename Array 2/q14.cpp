//  Write a program to print array elements in reverse order using the swapping method.
#include<iostream>
using namespace std;

int main()
{
   int a[100],i,n,sum=0,count=0;
   cout<<"Size of array:";
   cin>>n; 
   cout<<"Insert elements of Array:";
   for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int temp;
    for(int j=0;j<n;j++)
    {
    for(i=n-1;i>=j+1;i--)
    {
        temp=a[i];
        a[i]=a[i-1];
        a[i-1]=temp;
    }
    }
    cout<<"Array after swapping:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}