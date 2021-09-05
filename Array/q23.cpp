// Write a program to search a specified integer in an array.
#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i;
    cout<<"Size of array:";
    cin>>n; 
    cout<<"Insert elements of Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Integer to search:";
    int m;
    cin>>m;
    int position=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            position=i;
        }
    }
    //cout<<position<<endl;//
    if(position!=0)
    {
        cout<<"Yes, Element is present at position "<<position;
    }
    else
    {
        cout<<"Nako, Element is present like that in array.";
    }
return 0;
}