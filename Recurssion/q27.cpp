//  Write a Program to Print the multiplication table using recursion.
#include<iostream>
using namespace std;

void multi(int n,int i)
{
    cout<<"\n";
    cout<<n<<" X "<<i<<" = "<<n*i;
    if(i<10)
    return multi(n,i+1);
}

int main()
{
    int n,i=1;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"MULTIPLICATION TABLE OF "<<n<<" is: "<<"\n";
    multi(n,i);
    return 0;
}