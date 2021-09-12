// Write a program to count the number of vowels, consonants, numbers, and special characters present in a string.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter your String:";
    getline(cin,str);
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
   int i;
    int v_count=0,s_count=0,n_count=0;
    for(i=0;i<len;i++)
    {
    if(str[i]=='a' || str[i]=='A' || str[i]=='e'|| str[i]=='E' || str[i]=='i'
       || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
    {
     v_count++;
    }
    else if(str[i]>='0' && str[i]<='9')
        n_count++;
    else if(str[i]>= 0 && str[i]<=47 || str[i]>= 58 && str[i]<=64 || str[i]>=91 && str[i]<=96 || str[i]>= 123 && str[i]<=127)
        s_count++;
    }
    cout<<"Number of digits: "<<n_count<<"\n";
    cout<<"Number of vowels: "<<v_count<<"\n";
    cout<<"Number of special character: "<<s_count<<"\n";
    cout<<"Number of consonants: "<<len-n_count-v_count-s_count<<"\n";
return 0;
}