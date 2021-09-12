// Write a program to convert the Lowercase to Uppercase without using the inbuilt function.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter string in [Lowercase]: ";
    getline(cin,str);
    int i=0;
    while (str[i] !='\0')
    {
        if(str[i]>96 && str[i]<123)
        str[i]-=32;
        i++;
    }
    cout<<"String in lowercase is: "<<str;
return 0;
}
