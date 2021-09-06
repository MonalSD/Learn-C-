// Write a program to separate even and odd position numbers in an array.
#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,ce=0,co=0;
    cout<<"Size of array:";
    cin>>n; 
    cout<<"Insert elements of Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int even[100],odd[100];
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            even[ce]=a[i];
            ce++;
        }
        else
        {
            odd[co]=a[i];
            co++;
        }
    }
    cout<<"Odd Position Array:";
    for(i=0;i<co;i++)
    {
        cout<<odd[i]<<" ";
    }
    cout<<endl;
    cout<<"Even Position Array:";
    for(i=0;i<ce;i++)
    {
        cout<<even[i]<<" ";
    }
return 0;
}