// Write a program in C++ to input a single digit number and print a rectangular form of 4 columns and 6 rows.
#include<iostream>
using namespace std;

int main()
{
    int r,c,n,i,j;
    cout<<"To print a Rectangular:"<<endl;
    cout<<"Insert number of rows and columns:"<<endl;
    cin>>r>>c;
    cout<<"Insert number:"<<endl;
    cin>>n;
    cout<<"Pattern:"<<endl;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i == 1 || i == r ||j == 1 || j == c)
            cout <<n;
            else
            cout<< " ";
        }
        cout<<endl;
    }
}