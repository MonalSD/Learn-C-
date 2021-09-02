//Write a program in C++ to find the area of Scalene Triangle.
#include<iostream>
#include<math.h>
#define PI 3.14159
using namespace std;

int main()
{
    double a,b,ang1;
    cout<<"To find Area of Scalene Triangle:"<<endl;
    cout<<"Insert sides of Triangle:"<<endl;
    cin>>a>>b;
    cout<<"Insert angle between these sides of the triangle:"<<endl;
    cin>>ang1;
    cout<<"Area of scalene triangle :"<<(a*b*sin((PI/180)*ang1))/2;
}