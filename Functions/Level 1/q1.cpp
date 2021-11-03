// Write a program to print the sum of two numbers entered by user by defining your own function.
#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int main(){
    int x,y;
    cout<<"Insert no."<< "\n";
    cin>>x>>y;
    cout<<"Sum of two Numbers:"<<sum(x,y);

    return 0;
}