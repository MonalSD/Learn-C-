// Write a program to find the array type 
#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,even_type=0,odd_type=0;
    cout<<"Size of array:";
    cin>>n; 
    cout<<"Insert elements of Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        even_type++;
        else
        odd_type++;
    }
     if(even_type==n)
        cout<<"Even type array\n";
    else if(odd_type==n)
        cout<<"odd type array\n";
    else
        cout<<"Mixed array\n";
return 0;
}