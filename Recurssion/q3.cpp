// Write a Program to multiply two numbers using recursion.
#include<iostream>
using namespace std;

int product(int a,int b)
{
    if(a<b)
    return product(b,a);

    else if(b!=0)
    return (a+product(a,b-1));

    else 
    return 0;
}

int main()
{
    int x,y;
    cout<<"Enter Two Numbers: ";
    cin>>x>>y;
    cout<<"Multiplication: "<<product(x,y);
    return 0;
}