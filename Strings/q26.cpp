// Write a program to sort names in alphabetical order.
#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

int main()
{
    char str[100][100];
    int n;
    cout<<"Insert no. of names: ";
    cin>>n;
    cout<<"Insert Names: ";
    for(int i=0;i<n;i++)
    {
        gets(str[i]);
    }
    for(int i=0;i<n;i++)
    {
        int s_index=i;
        for(int j=i+1;j<n;j++)
        {
            for(int k=0;k<strlen(str[j]) && k==strlen(str[s_index]);k++)
            {
                if (int(tolower(str[s_index][k]))>int(tolower(str[j][k])))
                {
                    s_index=j;
                    break;
                }
                else if(int(tolower(str[s_index][k]))<int(tolower(str[j][k])))
                {
                    break;
                }
            }
        }
        char temp[100];
        strcpy(temp,str[i]);
        strcpy(str[i],str[s_index]);
        strcpy(str[s_index],temp);
    }
    cout<<"After Sorting:";
    for(int i=0;i<n;i++)
        {
            puts(str[i]);
        } 
    
return 0;

}