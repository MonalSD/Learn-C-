// Write a language program in C++ which accepts the user's first and last name and print them in reverse order with a space between them.
#include<iostream>
using namespace std;

int main()
{
    char fname[30], lname [30];
    cout<<"Print the name in reverse where last name comes first:"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<" Input First Name: "<<endl;
    cin>>fname;
    cout<<" Input Last Name: "<<endl;
    cin>>lname;
    cout<<"Name in reverse is:"<<lname<<" "<<fname<<endl;
    return 0;
}