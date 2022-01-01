#include<iostream>
#include <string>
using namespace std;

int main()
{
    char a[100];
    
    cout<<"Enter String: ";
    getline(cin,a);
    
    int flag = 0;
    char b[100];
    
    int length = strlen(a)+1;    
    for(int i =0 ; i<strlen(a); i++)
    {
        for(int j = i; j<strlen(a); j++)
        {
            char word[100];
            int l = 0;
            for(int k = i; k<=j; k++)
            {
                word[l] = a[k];
                l++;
            }
            
            // cout<<"-----LOOP-----"<<endl;
            
            char reverse_word[100];
            for(int k = 0; k<=l; k++)
            {
                reverse_word[k] = word[l-k-1];
            }
            
            // for(int m =0; m<l; m++)
            // {
            //     cout<<word[m];
            // }
            // cout<<endl;
            
            // for(int m =0; m<l; m++)
            // {
            //     cout<<reverse_word[m];
            // }
            
            // cout<<endl;
            
            int flag2 = 1;
            for(int k = 0; k<l;k++)
            {
                if(word[k]!=reverse_word[k])
                {
                    flag2 = 0;
                    break;
                }
            }
            
            // cout<<flag2<<endl;
            
            if(flag2 && l>1)
            {
                if(l<length)
                {
                    flag = 1;
                    length = l;
                    for(int k = 0; k<l; k++)
                    {
                        b[k] = word[k];
                    }
                }
            }
        }
    }
    
    cout<<"-------RESULT-------"<<endl;
    if(flag)
    {
        for(int i =0; i<length; i++)
        {
            cout<<b[i];
        }
    }
    else
    {
        cout<<"No palindrone found"<<endl;
    }
    cout<<endl;
    
    
}
