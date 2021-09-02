//  Write a program in C++ to find the area of any triangle using Heron's Formula.
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a,b,c,s;
    cout <<"The area of Triangle using Heron's Formula"<<endl;
    cout <<"Insert sides of triangle:"<<endl;
    cin>>a>>b>>c;
    s = (a+b+c)/2; 
    cout <<"Area of Triangle :"<< sqrt(s*(s-a)*(s-b)*(s-c));
    return 0;

}