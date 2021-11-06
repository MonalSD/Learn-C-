// Write a Program to find the Reverse a number using Recursion.
#include<iostream>
using namespace std;

int rev(int a)
{
    if (a<10)
    {
        return a;
    }
    else 
    {
        cout<<(a%10);
        rev(a/10);
    }
}

int main()
{
    int num;
    cout<<"Enter Your Number: ";
    cin>>num;
    cout<<"Reverse: "<<rev(num);
    return 0;
}