// Write a program in C to find the maximum number between two numbers using a pointer.
#include<iostream>
using namespace std;
int main()
{
    int fn,sn;
    int *pt1=&fn;
    int *pt2=&sn;
    
    cin>>fn;
    cin>>sn;

    if(*pt1 < *pt2)
    cout<<sn<<" is the maximum number.";

    else
    cout<<fn<<" is the maximum number.";

    return 0;

}