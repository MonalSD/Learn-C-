//  Write a program to check if one array is a subset of another array or not.
#include<iostream>
using namespace std;

int main()
{
    int a[100],b[100],i,j,n,m,count=0;
    cout<<"Size of array1:";
    cin>>n; 
    cout<<"Insert elements of Array1:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Size of array2:";
    cin>>m; 
    cout<<"Insert elements of Array2:";
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            count++;
        }
    }
    if(count==m)
    {
        cout<<"B is subset of A";
    }
    else
    {
        cout<<"Not a Subset";
    }
return 0;
}