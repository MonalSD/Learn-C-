// Write a C++ program to find the largest element of a given array of integers.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i=0;
    cout<<"Number of inputs: ";
    int n;
    cin>>n;
    cout<<"Insert array:";
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int temp=a[0];
    for(i=0; i<n; i++)
    {
        if(temp<a[i])
           { 
            temp=a[i];
            }
    }
    cout<<temp;
    return 0;
}