// Write a Program to Convert Octal to a decimal using recursion.
#include<iostream>
#include<cmath>
using namespace std;

int conv(int n)
{
    static int decimal=0,sem=0;
    if(n!=0)
    {
        decimal=decimal+(n%10)*pow(8,sem);
        sem++;
        conv(n/10);
    }
    return decimal;
}

int main()
{
    int n;
    cout<<"Enter the Octal Value:";
    cin>>n;
    cout<<"Decimal Value of Octal number is: "<<conv(n);
    return 0;
}