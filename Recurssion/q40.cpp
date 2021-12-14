//  Write a Program to Find the sum of odd numbers using recursion in an array.
#include<iostream>
using namespace std;

int odd(int arr[],int n)
{
    static int sum =0;
    int i;
    if(n>0)
    {
        i=n-1;
        if((arr[i]%2)!=0)
        sum+=arr[i];
        odd(arr,i);
    }
    return sum;
}

int main()
{
    int n,j;
    cout<<"Enter your array size:";
    cin>>n;
    int arr[100];
    cout<<"Enter the Array Element:";
    for(j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    cout<<"Sum of even Element is: "<<odd(arr,n);
}