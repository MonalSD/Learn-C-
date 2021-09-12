//  Write a program to convert the Uppercase to lowercase without using the inbuilt function.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter string in [Uppercase]: ";
    getline(cin,str);
    int i=0;
    while (str[i] !='\0')
    {
        if(str[i]>64 && str[i]<91)
        str[i]+=32;
        i++;
    }
    cout<<"String in lowercase is: "<<str;
return 0;
}
