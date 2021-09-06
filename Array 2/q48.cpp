//  Write a program to find Maximum the difference between two elements in an array.
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a[100],i,n,j,temp,sub;
    cout<<"Size of Array: ";
    cin>>n;
    cout<<"Insert Elements Array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int f=a[0],s=a[1],max_sub=a[0]-a[1];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
        sub=a[i]-a[j];
        if(abs(sub)>abs(max_sub))
        {
            max_sub=sub;
            f=a[i];
            s=a[j];
        }
        }
    }
cout<<" Maximum difference between two Element is : "<<max_sub;

}
