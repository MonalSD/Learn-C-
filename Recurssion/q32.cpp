// Write a Program to Convert decimal to octal using recursion.
#include<iostream>
using namespace std;

int conv(int n)
{
    static int sem=1, octal=0;
    if(n!=0)
    {
        octal= octal+(n%8)*sem;
        sem=sem*10;
        conv(n/8);
    }
    return octal;
}

int main()
{
    int n;
    cout<<"Enter the Decimal Value:";
    cin>>n;
    cout<<"Octal Value of Decimal number is: "<<conv(n);
    return 0;
}