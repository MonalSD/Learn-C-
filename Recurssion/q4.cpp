// Write a Program to divide two numbers using recursion.
#include<iostream>
using namespace std;

int divison(int a,int b)
{
    if(b>a)
    {
       return 0;     
    }
    else
    return (1 + divison(a-b,b));
}

int main()
{
    int x,y;
    cout<<"Enter two Numbers: ";
    cin>>x>>y;
    cout<<"Division: "<<divison(x,y);
    return 0;
}