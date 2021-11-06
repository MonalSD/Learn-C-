// Write a Program to find subtraction of two numbers using recursion.
#include<iostream>
using namespace std;

int sub(int a, int b)
{
    if(b==0)
    return a;
    else 
    return sub(a-1,b-1);
}
int main()
{
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"Subtraction: "<<sub(x,y);
    return 0;
}