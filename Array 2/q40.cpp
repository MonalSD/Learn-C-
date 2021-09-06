// Write a Program to Segregate 0s and 1s in an array.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,c=0;
    cout<<"Size of Array:";
    cin>>n;
    cout<<"Insert Elements in Array only 0's and 1's:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            c++;
        }
    }
    for(i=0;i<c;i++)
    {
        a[i]=0;
    }
    for(i=c;i<n;i++)
    {
        a[i]=1;
    }
cout<<endl<<"Array after segregation:";
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
}