// Write a program to find the frequency of characters in a string.
#include<iostream>
#include<string>
using namespace std;

int main()
{
   string str;
   cout<<"Enter a string: ";
   getline(cin,str);
   int len=str.length();
   int i;
   for(i=0;i<len;i++)
   {
       int count=0;
       for(int j=0;j<len;j++)
       {
           if(str[i]==str[j])
           {
               count++;
           }
       }
       int flag=1;
       for(int j=0;j<i;j++)
       {
           if(str[i]==str[j])
           flag=0;
       }
       if(flag)
       {
           cout<<endl<<"character "<<str[i]<<" occurs "<<count<<"times";
       }
   }

}