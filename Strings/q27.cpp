//  Write a program to print the Ascii value of character in a String.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    cout<<"ASCII values are: ";
    for(int i=0;i<len;i++)
    {
        cout<<str[i]<<" == "<<int(str[i])<<"\n";
    }


return 0;

}