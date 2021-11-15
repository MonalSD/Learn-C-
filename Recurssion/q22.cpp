//  Write a Program to Find maximum and minimum elements in the array using recursion.
#include<iostream>
using namespace std;
int fmax(int arr[],int n)
{
    int i=0,max=arr[0];
    if(i<n)
    {
        if(arr[i]>=max)
        max=arr[i];
        i++;
        fmax(arr,i);
    }
    return max;
}

int fmin(int arr[],int n)
{
    int i=0,min=arr[0];
    if(i<n)
    {
        if(arr[i]<=min)
        min=arr[i];
        i++;
        fmin(arr,i);
    }
    return min;
}

int main()
{
    int n,i;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[100];
    cout<<"Enter array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"MAX element: "<<fmax(arr,n)<<endl;
    cout<<"MIN element: "<<fmin(arr,n)<<endl;
    return 0;
}