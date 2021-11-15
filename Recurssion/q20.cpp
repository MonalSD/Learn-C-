// Write a Program to convert decimal to binary using a recursive function.
#include<iostream>
using namespace std;

int deci(int n)
{
    if(n==0)
    return 0;
    else 
    return (n%2+10*deci(n/2));
}

int main()
{
    int x;
    cout<<"Enter no.: ";
    cin>>x;
    cout<<deci(x);
    return 0;
}
