// Write a program in C++ to display various type or arithmetic operation using mixed data type.
#include <iostream>
using namespace std;

int main()
{
    cout <<"Display arithmetic operations with mixed data type :"<<endl;
    cout <<"---------------------------------------------------------"<<endl;
    int i,j;
    double k,l;
    cout<<"Insert Variables:"<<endl;
    cin>>i>>j>>k>>l;
    cout<< i+j<<endl;
    cout<<k+j<<endl;
    cout<<k+l<<endl;
    cout<<int(l+j)<<endl;
    cout<<double(i+j)<<endl;
    return 0;
}
