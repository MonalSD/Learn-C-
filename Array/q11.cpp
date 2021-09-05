//  Write a program to Print the Average of Numbers in array at an even position
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,sum=0,count=0;
    cout<<"Size of Array:";
    cin>>n;
    cout<<"Insert Elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum +=a[i];
            count++;
        }
    }
    double avg;
    avg = sum/count;
    cout<<"the Average of Numbers in array at an even position: "<<avg;
return 0;
}