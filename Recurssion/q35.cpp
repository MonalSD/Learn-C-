// Write a Program to print array elements using recursion.
#include<iostream>
using namespace std;

void print(int arr[],int i,int n)
{
    if(i>=n)
    return;

    cout<<arr[i]<<" ";
    print(arr,i+1,n);
}

int main()
{
    int n,i;
    cout<<"Enter your array size:";
    cin>>n;
    int arr[100];
    cout<<"Enter the Array Element:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array Element Are:";
    print(arr,0,n);
}

