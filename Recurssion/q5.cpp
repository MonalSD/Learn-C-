// Write a Program to find the power of a number using recursion.
#include<iostream>
using namespace std;

int pow(int a,int n)
{
    if(n==0)
    return 1;
    else
    return (a*pow(a,n-1));
}
int main()
{
    int x,y;
    cout<<"Enter No. & Power: ";
    cin>>x>>y;
    cout<<"Ans: "<<pow(x,y);
    return 0;
}