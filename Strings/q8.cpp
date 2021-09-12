// Write a program to convert alternative letters in uppercase.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int i=0;
    int j=0;
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    for(i=0;i<len;i++)
    {
        if(j%2==1)
        {
            if(str[i]>64 && str[i]<91)
            str[i]+=32;
        }
        else
        {
            if(str[i]>96 && str[i]<123)
            {
                str[i]-=32;
            }
        }
        if(str[j]==' ')
        continue;
        j++;
    }
    cout<<"String is : "<<str;
return 0;

}
