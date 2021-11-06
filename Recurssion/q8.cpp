// Write a Program to find the sum of digits of a number using recursion.
#include<iostream>
using namespace std;
int sum(int n)
{
    if(n>0)
    return (n%10)+sum(n/10);
    else if (n==0)
    return 0;
}
int main()
{
    int x;
    cout<<"Insert a no.: ";
    cin>>x;
    cout<<"Sum: "<<sum(x);
    return 0;
}