//  Write a Program to Print array in reverse order using recursion.
#include<iostream>
using namespace std;

void rev(int arr[],int n)
{
    int i;
    if(n>0)
    {
    int i=n-1;
    cout<<arr[i]<<" ";
    rev(arr,i);
    }
    
    return ;    
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
    rev(arr,n);
    
    return 0;
}