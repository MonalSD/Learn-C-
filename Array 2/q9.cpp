// Write a program to find the 2nd smallest element in the array
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n;
    cout<<"size of array:";
    cin>>n;
    cout<<"Insert elements in array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>=a[i])
        {
            min=a[i];
        }
    }
    int p=a[0];
    for(i=0;i<n;i++)
    {
        if(p>=a[i] && a[i]>min)
        {
            p=a[i];
        }
    }
    cout<<"Second smallest number: "<<p;
return 0;
}