// Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students.
// 1 - Write a function to print the names of all the students having age 14.
// 2 - Write another function to print the names of all the students having even roll no.
// 3 - Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).

#include<iostream>
using namespace std;

struct student
{
    /* data */
    int roll;
    char name[25];
    int age;
    char address[50];
};

    struct student st[50];

void na(int n)
{
    for(int i=0;i<n;i++)
    { 
        if(st[i].age==14)
        {
            cout<<st[i].name<<"\n";
        }
    }
}

void ro(int n)
{
    for(int i=0;i<n;i++)
    { 
        if((st[i].roll)%2 == 0)
        {
            cout<<st[i].name<<"\n";
        }
    }
}


int main()
{
    int n;
    cout<<"Insert no. of students: ";
    cin>>n;
    cout<<"enter roll no., name, age and marks: ";
    for(int i=0;i<n;i++)
    {
        cin>>st[i].roll;
        cin>>st[i].name;
        cin>>st[i].age;
        cin>>st[i].address;
    }

    cout<<"NAME OF STUDENTS of AGE 14 ";
    na(n);
    cout<<"NAME OF STUDENTS with Even Roll No. ";
    ro(n);

    return 0;
}





