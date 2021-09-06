//Write a Program to Find two elements whose sum is closest to zero in an Array
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a[100],i,j,n,sum;
    cout<<"Size of Array:";
    cin>>n;
    cout<<"Insert Elements in Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int first =a[0], second=a[1];
    int closest_zero_sum = first + second;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
           sum =a[i]+a[j];
           if(abs(sum)<=abs(closest_zero_sum))
           {
               closest_zero_sum=sum;
               first=a[i];
               second=a[j];
           }

        }
    }
    cout<<"Sum closest to zero pair is: "<<"("<<first<<","<<second<<").";
return 0;
}