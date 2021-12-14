// Write a Program to check Armstrong's number or not using recursion.
#include<iostream>
using namespace std;

int arm(int n)
{
    if(n>0)
    return ((n%10)*(n%10)*(n%10)+arm(n/10));
}

int maint()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
   if(arm(n)==n)
    cout<<"It is an Armstrong Number";
   else
    cout<<"It is not an Armstrong Number";
   
   return 0;

}