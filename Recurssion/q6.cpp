// Write a Program to find the factorial of a number using recursion.
#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0 || n==1)
    return 1;
    else
    return n*fact(n-1);
}

int main()
{
    int x;
    cout<<"Insert No. to find factorial: ";
    cin>>x;
    cout<<"factorial: "<<fact(x);
    return 0;
}