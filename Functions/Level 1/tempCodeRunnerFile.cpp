//Write a program to print the factorial of a number by defining a function named 'Factorial'.
#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1)
    return 1;
    else
    return n*factorial(n-1);
}

int main(){
    int a;
    cout<<"Insert no.:";
    cin>>a;
    cout<<factorial(a);
    return 0;
}