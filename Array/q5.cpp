//  Write a program to find the sum of negative and positive integers.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,sum_pos=0,n,sum_neg=0;
    cout<<"Number of elements:";
    cin>>n;
    cout<<"insert array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            sum_pos += a[i];
        }
        else
        {
            sum_neg += a[i];
        }

    }
    cout<<"Sum of positive numbers: "<<sum_pos<<endl;
    cout<<"Sum of negative numbers: "<<sum_neg;
}