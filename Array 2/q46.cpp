// Write a Program to Count inversions in an array.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,j,count=0;
    cout<<"Size of Array: ";
    cin>>n;
    cout<<"Insert Elements in Array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // for inversion:
    cout<<"All the inversions are:";
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                cout<<"("<<a[i]<<","<<a[j]<<")";
                count++;
            }
        }
    }
    if(count==0)
    {
        cout<<"(0)";
    }
    else if(count==1)
    {
        cout<<"\nNumber of Inversions is "<<count;
    }
    else
    {
        cout<<"\nNumber of Inversions are "<<count;
    }
return 0;
}