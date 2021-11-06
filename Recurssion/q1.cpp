// Write a Program to find the sum of two numbers using recursion.

#include<iostream>
using namespace std;

int sum(int a,int b)
{
    if(b==0)
    return a;
    else
    return sum(a,b-1)+1;
}

int main(){
    int x,y;
    cout<<"Enter Two Numbers: ";
    cin>>x>>y;
    cout<<"Sum: "<<sum(x,y);
    return 0;
}