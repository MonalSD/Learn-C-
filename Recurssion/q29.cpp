// Write a Program to Count the number of zeros in a number using recursion.
#include<iostream>
using namespace std;

int zeroes(int n)
{
    static int count=0;
    if(n!=0)
    {
        if(n%10==0)
        count++;

        zeroes(n/10);
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"The number of Zeros in the Given Number is "<<zeroes(n);
    return 0;
}
