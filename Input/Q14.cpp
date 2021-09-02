// Write a program in C++ to calculate the volume of a sphere.
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double r,pi=3.14;
    cout<<"Insert Radius:"<<endl;
    cin>>r;
    cout<<"Volume of Sphere :"<< (4*pi*pow(r,3))/3;
}