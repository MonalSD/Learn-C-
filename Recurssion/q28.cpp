// Write a Program to count the number of digits in a number using recursion
#include<iostream>
using namespace std;

int c_ount(int n)
{
    static int count =0;
    if(n!=0)
    {
        count++;
        c_ount(n/10);
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Number of digits: "<<c_ount(n);
    return 0;
}