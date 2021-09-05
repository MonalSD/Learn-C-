// Write a C++ program to find k largest elements in a given array of integers.
#include<iostream>
using namespace std;

int main()
{
    int a[100],n,k,i,j;
    cout<<"Number of element:";
    cin>>n;
    cout<<"to find largest number:";
    cin>>k;
    cout<<"Insert Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int temp=a[0];
    for(j=0;j<n;j++)
    {
        if(temp<a[j])
        {
            temp=a[j];
        }
    }
    int p=a[0];
    for(j=0;j<k-1;j++)
    {  
         p=a[0];
        for(i=0;i<n;i++)
        {
            if(p<a[i] && a[i]<temp)
            {
                p=a[i];
            }
        }
        temp=p;
    }
    cout<<temp;
return 0;
    
}