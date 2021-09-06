//  Write a program to separate positive and negative numbers in an array.
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,positive[100],negative[100],p=0,neg=0;
    cout<<"Size of array:";
    cin>>n; 
    cout<<"Insert elements of Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            positive[p]=a[i];
            p++;
        }
        else
        {
            negative[neg]=a[i];
            neg++;
        }
    }
    cout<<"Positive Element of Array:";
    for(i=0;i<p;i++)
    {
        cout<<positive[i]<<" ";
    }
    cout<<endl;
    cout<<"Negative Element of Array:";
    for(i=0;i<neg;i++)
    {
        cout<<negative[i]<<" ";
    }

return 0;

}