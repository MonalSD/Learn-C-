//  Write a program to print the marks obtained by a student in five tests.
#include<iostream>
using namespace std;

int main()
{
    int a[100],n;
    cout<<"No. of tests:";
    cin>>n;
    cout<<"Input Marks Obtained by student in "<<n<<"Tests:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Print marks obtained by student in 5 Tests:";
    for(int i=0;i<5;i++)
    {
        cout<<"Marks in test "<<i<<":"<<a[i]<<endl;
    }
return 0;
}