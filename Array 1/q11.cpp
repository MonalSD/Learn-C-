//  Write a C++ program to update every array element by multiplication of next and previous values of a given array of integers.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,j;
    cout<<"Number of elements";
    cin>>n;
    cout<<"Insert Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    a[0]=a[0]*a[1];
    int temp=a[0];
    for(i=1;i<n-1;i++)
    {
        int news=a[i];
        a[i]=temp*a[i+1];
        temp=news;
    }
    a[n-1] =temp*a[n-1];

cout<<"After multiplication: ";
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
return 0;

}