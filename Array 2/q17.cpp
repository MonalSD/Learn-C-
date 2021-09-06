//  Write a program to print the most occurring elements.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,j,b=0,count=0;
    cout<<"Size of array:";
    cin>>n; 
    cout<<"Insert elements of Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int temp=a[0];
    int c=a[0];
    for (i=0;i<n;i++)
    {
        temp=a[i],count=0;
        for(j=0;j<n;j++)
        {
            if(temp==a[j])
            {
                count++;
            }
        }
        if(count>b)
        {
            b=count;
            c=a[i];
        }
    }
cout<<c;
return 0;
}