// Define a function named 'perfect' that determines if parameter number is a perfect number. Use this function in a program that determines and prints all the perfect numbers between 1 and 1000.
#include<iostream>
using namespace std;

void perfect(int n)
{
    int sum=0,i=1;
     for(i=1;i<n;i++)
     {
        if(n%i==0)
        sum=sum+i;
     }

     if(sum==n)
     {
         cout<<i<<" ";
     }
}

int main()
{
    for(int i=2;i<1000;i++)
    {
        perfect(i);
    }
    return 0;
}