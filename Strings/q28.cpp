// Write a program to check String Anagrams or Not.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    char str1[100],str2[100];
    cout<<"Enter String1:";
    gets(str1);
    cout<<"Enter String2:";
    gets(str2);
    if(strlen(str1) == strlen(str2))
    {
        int flag=1;
        for(int i=0;i<strlen(str1);i++)
        {
            int count1=0;
            for(int j=0;j<strlen(str1);j++)
            {
                if(str1[i]==str1[j])
                {
                    count1++;
                }
            }
             int count2=0;
            for(int j=0;j<strlen(str1);j++)
            {
                if(str1[i]==str2[j])
                {
                    count2++;
                }
            }
            if(count1!=count2)
            {
                flag=0;
                cout<<"Not anagram.";
                break;
            }
        }
        if(flag)
        {
            cout<<"Anagram"<<endl;
        }

    }
    else
    {
        cout<<"Not Anagrams.";
    }

return 0;
}
