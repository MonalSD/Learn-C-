//Write a C++ program to replace all the lower-case letters of a given string with the corresponding capital letters.
#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
    char pranshu[30],a;
    int i=0;
    cout<<"Insert a String:"<<endl;
    while(a!='\n')
    {
        cin>>a;
        pranshu[i]=a;
        i++;
        cout<<pranshu<<endl;
    }
    cout<<pranshu;
    cout<<"String in Uppercase:"<<toupper(pranshu[30]);
    return 0;
}