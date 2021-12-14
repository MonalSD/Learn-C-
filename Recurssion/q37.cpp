// Write a program to compute the sum of elements in an array using recursion.
#include<iostream>
using namespace std;

int sumo(int arr[],int i,int n)
{
    static int sum=0;
    if(n>i)
    {
        sum = sum + arr[i];
        sumo(arr,i+1,n);
    }
    return sum;

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
    cout<<"Sum of array: "<<sumo(arr,0,n);
    
    return 0;
}