// Write a C++ program to sort a given unsorted array of integers, in wave form.
#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,fin[100];
    cout<<"Number of elements:";
    cin>>n;
    cout<<"Insert Arrays:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int temp=a[0];
    for(i=0;i<n-1;i+2)
    {
        if(temp<=a[i])
        {
            temp=a[i];
            fin[i]=temp;
        }

    }
    for(i=0;i<n;i++)
    {
        cout<<fin[i]<<" ";
    }
    
return 0;
}