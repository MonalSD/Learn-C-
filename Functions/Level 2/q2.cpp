// Define a function to print the prime factors of a number.
#include<iostream>
#include <cmath>
using namespace std;

void prime(int n)
{
    int i=2;
    if(n==1)
    return;
    while(n%i !=0)
    i++;
    cout<<i<<" ";
    prime(n/i);
}

int main()
{
    int p;
    cout<<"Enter a No.: ";
    cin>>p;
    prime(p);
    return 0;
}
