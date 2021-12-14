// Write a Program to Check a given number is an Automorphic number or not using recursion.
#include<iostream>
using namespace std;

int auto_morphic(int n)
{
    int sqr=n*n;
    if(n>0)
    {
        if(n%10 != sqr%10)
        {
            return -1;
        }
        else
        {
            return 0;
        }

        auto_morphic(n/10);
        sqr=sqr/10;
    }

    return 0;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;

   if(auto_morphic(n)==0)
    cout<<"It is an Automorphic Number.";
   else
    cout<<"It is not an Automorphic Number.";

    return 0;
}

