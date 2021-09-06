//  Write a program to find the largest element in the array
#include <iostream>
using namespace std;

int main()
{
    int a[100],i,n;
    cout<<"size of array:";
    cin>>n;
    cout<<"Insetr elements of array";
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
    cout<<"The largest element of array: "<<max;
}