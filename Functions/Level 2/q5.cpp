// Define a function to calculate power of a number raised to other i.e. ab using recursion where the numbers 'a' and 'b' are to be entered by the user

#include<iostream>
using namespace std;

int power(int a,int b)
{
    if(b==1)
    {
        return a;
    }
    
    else
    {
        return (a*power(a,b-1));
    }
}

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}