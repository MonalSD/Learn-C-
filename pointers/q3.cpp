// Write a program in C to demonstrate the use of &(address of) and *(value at address) operator.
#include<iostream>
using namespace std;

int main()
{
    int *p;
    int m =10;
    p=&m;
    cout<<"Address of m: "<<p<<endl;
    cout<<"value at address of m : "<<*p;
    return 0;

}