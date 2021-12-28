// Write a program in C to add two numbers using pointers. 
#include<iostream>
using namespace std;

int main()
{
    int fn,sn,*pt,*qt,sum;
    cout<<"add two numbers: "<<endl;
    cout<<"enter first number: ";
    cin>>fn;
    cout<<"enter second number: ";
    cin>>sn;

    pt=&fn;
    qt=&sn;

    sum=*pt+*qt;

    cout<<"Sum = "<<sum;

    return 0;
}