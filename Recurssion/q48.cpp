//  Write a recursive function to return the number of uppercase letters in a string.
#include<iostream>
#include<string>
using namespace std;

int upp(string str,int i)
{
    static int count =0;
    if(str[i]>='A' && str[i]<='Z')
    count++;

    if(i>=0)
    {
        upp(str,i-1);
    }
    return count;
}

int main()
{
    string str;
    cout<<"Enter your String:";
    getline(cin, str);
    int no_upp=upp(str,str.length()-1);
    if(no_upp==0)
        cout<<"No UpperCase Letter present in a given string.";
    else
       cout<<"Number Of UpperCase Letter Present in a given String is:"<<no_upp;
       return 0;
}