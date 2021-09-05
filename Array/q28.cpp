// Write a program to check if two arrays are the same or not.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,b[100],m,count=0,j,si,temp;
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
    //Sorttting array for Array 1:
    for(i=0;i<n;i++)
    {
        si=i;
        for(j=i;j<n;j++)
        {
            if(a[si]>a[j])
            {
                si=j;
            }
        }
        temp=a[i];
        a[i]=a[si];
        a[si]=temp;
    }
    //Sortting array for Array 2:
    for(i=0;i<n;i++)
    {
        si=i;
        for(j=i;j<n;j++)
        {
            if(b[si]>b[j])
            {
                si=j;
            }
        }
        temp=b[i];
        b[i]=b[si];
        b[si]=temp;
    }
    // Comparison:
    if(n==m)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]==b[i])
            count++;
        }
        // cout<<count;//
       if(count==n)
       {
           cout<<"arrays are same";
       } 
    }
    else
    cout<<"arrays aren't same";
return 0;

}