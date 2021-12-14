//  Write a Program to Implement Binary search using recursion.
#include<iostream>
using namespace std;

int binarys(int arr[],int start,int end,int search)
{
    int mid;

    if(start>end)
    return -1;

    mid=(start+end)/2;

    if(arr[mid]==search)
    return mid;

    if(search<arr[mid])
    {
        return (binarys(arr,start,mid-1,search));
    }
    else
    {
        return (binarys(arr,mid+1,end,search));
    }
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
    int search;
    cout<<"Enter the search element:";
    cin>>search;
    int pos=binarys(arr, 0, n, search);
    if ( pos== -1) {
        cout<<search<<" not found in array";
    } else {
        cout<<search<<" found at "<< "arr["<<pos<<"]";
    }
    return 0;
}