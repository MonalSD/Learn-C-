// Write a program to remove duplicate elements in an array.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,b[100],bin=0,j;
    cout<<"Size of array:";
    cin>>n; 
    cout<<"Insert elements of Array:";
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
    b[0]=a[0];
    bin++;
    for(i=0;i<n;i++)
    {
        int count=0;
        for(j=0;j<bin;j++)
        {
            if(a[i]==b[j])
            count++;
        }
    if(count==0)
    {
        b[bin]=a[i];
        bin++;
    }
    }
for(i=0;i<bin;i++)
{
    cout<<b[i]<<" ";
}
return 0;
}