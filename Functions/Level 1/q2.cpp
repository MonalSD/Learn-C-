// Define a function that returns the product of two numbers entered by user.
#include<iostream>
using namespace std;

int product(int x, int y)
{
    return x*y;
}

int main(){
    int a,b;
    cout<<"Insert two numbers"<<"\n";
    cin>>a>>b;
    cout<<"Product of two numbers:"<<product(a,b);
    return 0;
}