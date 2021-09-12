// Write a Program to check if a string contains a given substring.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str,sstr;
    cout<<"Enter String: ";
    getline(cin,str);
    cout<<"Enter substring: ";
    getline(cin,sstr);
    int len=str.length();
    int slen=sstr.length();
    int flag=0;
    for(int i=0;i<len;i++)
    {
        flag=1;
        for(int j=0;j<slen;j++)
        {
            if(str[i+j]==sstr[j])
            {

            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            cout<<endl<<"Substring";
            break;
        }
    }
    if(!flag)
    {
        cout<<endl<<"Not substring";
    }

return 0;   

}