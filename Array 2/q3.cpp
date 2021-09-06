// Write a program to print a string using an array.
#include<iostream>
using namespace std;

int main()
{
    int n,i;
    char a[100];
    cout<<"Insert no. of elements in string:";
    cin>>n;
    cout<<"Input String:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
return 0;
}