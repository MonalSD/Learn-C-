// Write a Program to find the sum of odd numbers using recursion.
#include<iostream>
using namespace std;

int sum(int x, int y)
{
    if(x>y)
    return 0;
    return x+sum(x+2,y);
}
int main()
{
    int a=1,b;
    cout<<"Enter number: ";
    cin>>b;
    cout<<"Sum: "<<sum(a,b);
    return 0;
}