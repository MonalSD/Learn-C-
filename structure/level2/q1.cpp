// Write a structure to store the names, salary and hours of work per day of 10 employees in a company. Write a program to increase the salary depending on the number of hours of work per day as follows and then print the name of all the employees along with their final salaries.
// Hours of work per day	8	10	>=12
// Increase in salary	$50	$100	$150

#include<iostream>
using namespace std;

struct employee{
    char name[25];
    int salary;
    int hd;
};

struct employee ey[10];

int main()
{
    int n;
    cout<<"Insert no. of employees: ";
    cin>>n;
    cout<<"enter Name,Salary,Hours of work per day: ";
    for(int i=0;i<n;i++)
    {
        cin>>ey[i].name;
        cin>>ey[i].salary;
        cin>>ey[i].hd;
    }

    for(int i=0;i<n;i++)
    {
        if(ey[i].hd ==8)
        {
            ey[i].salary += 50;
        }

        else if(ey[i].hd == 10)
        {
            ey[i].salary +=100;
        }

        else if (ey[i].hd >=12)
        {
            ey[i].salary +=150;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<"------------------Details of Employee "<<i+1<<"--------------------"<<endl;
        cout<<"NAME: "<<ey[i].name<<endl;
        cout<<"Salary: "<<ey[i].salary<<endl;
    }

    return 0;
}