// Write a C++ program to swap first and last digits of any number.
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,digit,first,last,a,b,m;
    cout<<"Insert a number:"<<endl;
    cin>>n;
    digit = (int)log10(n);
    first = n / pow(10,digit);
    last = n % 10;
    a = first * (pow(10, digit));
    b = n % a;
    n = b / 10;
    m = last * (pow(10, digit)) + (n * 10 + first);
    cout<<"The number after swaping the first and last digits are:"<<m;
}