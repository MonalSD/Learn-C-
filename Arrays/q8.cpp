// Write a C++ program to find the next greater element of every element of a given array of integers. Ignore those elements which have no greater element.
#include <iostream>
using namespace std;

int main()
{
    int a[100],n,i,j;
    cout<<"Input no. of elements:";
    cin>>n;
    cout<<"Insert Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int largest=a[0];
    for(i=0;i<n;i++)
    {
        if(largest<a[i])
        {
            largest=a[i];
        }
    }
    int p=a[0];
    for(j=0;j<n-1;j++)
    {  
         p=a[0];
        for(i=0;i<n;i++)
        {
            if(p<a[i] && a[i]<largest)
            {
                p=a[i];
            }
        }
        largest=p;
    }
    cout<<largest;


return 0;
}