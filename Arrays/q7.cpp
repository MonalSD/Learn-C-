// Write a C++ program to find the most occurring element in an array of integers.
#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,count=0,b=0,j;
    cout<<"Number of elements:";
    cin>>n;
    cout<<"insert Array:";
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