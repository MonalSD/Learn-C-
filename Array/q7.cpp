//  Write a program to find the smallest element in the array
#include <iostream>
using namespace std;

int main()
{
    int a[100],i,n;
    cout<<"Size of Array:";
    cin>>n;
    cout<<"Insert elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int min = a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    cout<<"Smallest Number : "<<min;
return 0;


}