// Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.
#include<iostream>
using namespace std;

int peri(int r){
    cout<<"Perimeter of Circle: ";
    return 2*3.14*r;   
}
int area(int r){
    cout<<"Area of Circle: ";  
    return 3.14*r*r ;
}

int main(){
    int radius;
    cout<<"Insert Radius:"<<"\n";
    cin>>radius;
    cout<<peri(radius)<<"\n";
    cout<<area(radius)<<"\n";
    return 0;
}