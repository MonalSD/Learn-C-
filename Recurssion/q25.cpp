// Write a Program to Check if the given number is palindrome or not using recursion.
#include<iostream>
using namespace std;
int reverse(int n)
{
    static int rem,rev=0;
    if(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        reverse(n/10);
    }
    return rev;
}

int main()
{
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    if(reverse(n)==n)
    cout<<n<<" Palindrome Number";
    else
    cout<<n<<" not a palindrome number";
    return 0;
}
