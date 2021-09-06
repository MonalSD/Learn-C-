//  Write a program to print the average marks obtained by a student in five tests.
#include<iostream>
using namespace std;

int main()
{
    int a[100],n,sum=0,i;
    cout<<"Number of test:";
    cin>>n;
    cout<<"Insert Marks:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum += a[i];
    }
    double avg=sum/n;
    cout<<"the average of test marks is "<<avg<<".";


}