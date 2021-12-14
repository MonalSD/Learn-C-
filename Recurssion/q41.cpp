// Write a Program to Implement Linear search using recursion.
#include<iostream>
using namespace std;

int linears(int arr[],int search,int n)
{
    int i;
    static int temp=0;
    if(n>0)
    {
        i=n-1;
        if(arr[i]==search)
        temp =1;

        linears(arr,search,i);
    }
    return temp;
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
    if(linears(arr,search,n)==1)
       cout<<"Element found....";
    else
        cout<<"Element not found....";
    return 0;
}
