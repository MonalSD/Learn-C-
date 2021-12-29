// Write a structure to store the name, account number and balance of customers (more than 10) and store their information.
// 1 - Write a function to print the names of all the customers having balance less than $200.
// 2 - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.

#include<iostream>
using namespace std;

struct q8
{
    /* data */
    char name[25];
    int account;
    int balance;
};

struct q8 bank[50];

void bal(int n)
{
    for(int i=0;i<n;i++)
    {
        if(bank[i].balance <200)
        {
            cout<<bank[i].balance<<endl;
        }
    }
}
void rich(int n)
{
    for(int i=0;i<n;i++)
    {
        if(bank[i].balance > 1000)
        {
            bank[i].balance += 100;
            cout<<bank[i].balance;
        }
    }
}
int main()
{
    int n;
    cout<<"Insert no. of customers: ";
    cin>>n;
    cout<<"enter name, account no. and balance: ";
    for(int i=0;i<n;i++)
    {
        cin>>bank[i].name;
        cin>>bank[i].account;
        cin>>bank[i].balance;
    }

    cout<<"customers having balance less than $200: ";
    bal(n);

    cout<<"customers having balance greater than $1000: "; 
    rich(n);

    return 0;
}
