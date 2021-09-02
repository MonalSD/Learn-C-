// Write a program in C++ to swap two numbers.
#include<iostream>
using namespace std;

int main()
{
    cout<<"Swap two numbers :"<<endl;
    cout<<"-----------------------"<<endl;
    int a,b,c;
    cout<<"Insert two integers:"<<endl;
    cin>>a>>b;
    c=b;
    b=a;
    a=c;
    cout<<a<<"\n"<<b;
    return 0;
}