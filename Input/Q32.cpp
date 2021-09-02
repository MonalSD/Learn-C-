//Write a program in C++ to check whether a number is positive, negative or zero.
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Insert number:"<<endl;
    cin>>a;
    if(a<0){
        cout<<"The number is negative.";
    }
    else if(a>0){
        cout<<"The number is positive.";
    } 
    else{
       cout<<"The number is zero"; 
    }

}