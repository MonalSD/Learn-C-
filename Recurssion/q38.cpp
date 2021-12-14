// Write a Program to check a strong number or not using recursion.
#include<iostream>
using namespace std;

int facto(int num)
{
    if(num<=0)
    return 1;

    else 
    return num*facto(num-1);
}

int check(int num)
{
    int fact;
    static int sum =0;
    if(num>0)
    {
        fact =1;
        int rem =num%10;
        check(num/10);
        fact = facto(rem);
        sum+=fact;
    }
    return sum;

}

int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
   if(check(num)==num)
    cout<<"It is a Strong Number.";
   else
    cout<<"It is not a strong Number.";
}
