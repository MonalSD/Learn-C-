// Given a string, print all possible palindromic partitions
#include<iostream>
#include<string>
using namespace std;

//check pallindrome
int check(string str)
{
    int len = str.length();

    for(int i=0;i<len/2;i++)
    {
        if(str[i] != str[len-i-1])
        return false;
    }

    return true;
}

int main(){
    string st;
    cout<<"Enter the string: ";
    getline(cin,st);

    if(check(st)==true)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}