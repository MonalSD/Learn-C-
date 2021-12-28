// Write a program in C to demonstrate how to handle the pointers in the program.
#include<iostream>
using namespace std;

int main()
{
    int *p;
    int m=29;
    p=&m;

    cout<<"Address of m: "<<p<<endl;
    cout<<"Value of m: "<<*p<<"\n";

    return 0;
}