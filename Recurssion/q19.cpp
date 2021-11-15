// Write a Program to convert binary to a decimal using a recursive function.
#include<iostream>
using namespace std;
int bin(int x)
{
    if(x==0)
    return 0;
    else 
    return (x%10 + 2*bin(x/10));
}

int main()
{
    int x;
    cout<<"Enter binary value: ";
    cin>>x;
    cout<<bin(x);
    return 0;
}