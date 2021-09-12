// Write a program to check whether string 1 match string 2.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1,str2;
    cout<<"Enter String1:";
    getline(cin,str1);
    cout<<"Enter String2:";
    getline(cin,str2);
    int len1=0,len2=0;
    while(str1[len1]!='\0')
    {
        len1++;
    }
    while(str2[len2]!='\0')
    {
        len2++;
    }
    int i=0,j=0,count=0;

    if(len1!=len2)
    {
        cout<<"Strings not equal.";
    } 
    else
    {
        
        for(i=0;i<len1;i++)
        {
            for(int j=0;j<len2;j++)
            {
                if(str1[i]==str2[j])
                count=1;
            }    

        }
    }
    if(count==1)
    cout<<"Strings character are the same.";
    else
    cout<<"Strings character are not the same.";

return 0;
}