//  Write a program to find the 2nd largest element in the array
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n;
    cout<<"Size of array: ";
    cin>>n;
    cout<<"Insert elements in Array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    int sec_max=a[0];
    for(i=0;i<n;i++)
    {
        if(sec_max<a[i] && a[i]<max)
        {
            sec_max=a[i];
        }
    }
    cout<<"Second Largest Number: "<<sec_max;
return 0;
}