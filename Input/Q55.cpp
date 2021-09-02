// Write a program in C++ to enter P, T, R and calculate Compound Interest.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float P,R,T;
    cout<<"To calculate Compound Interest:"<<endl;
    cout<<"Insert Principal Value:"<<endl;
    cin>>P;
    cout<<"Insert Rate:"<<endl;
    cin>>R;
    cout<<"Insert Time Period:"<<endl;
    cin>>T;
    cout<<"Compound Interest:"<<P*pow((1+R/100),T)<<endl; 

}