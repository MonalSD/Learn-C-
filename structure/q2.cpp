// Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2.
#include<iostream>
using namespace std;

struct student
{
    /* data */
    int roll;
    char name[25];
    int age;
    int marks;
};

int main()
{
    struct student st[50];
    int n;
    cout<<"Insert no. of students: ";
    cin>>n;
    cout<<"enter roll no., name, age and marks: ";
    for(int i=0;i<n;i++)
    {
        cin>>st[i].roll;
        cin>>st[i].name;
        cin>>st[i].age;
        cin>>st[i].marks;
    }

    
    for(int i=0;i<n;i++)
    {
        if(st[i].roll == 2)
       {
        cout<<"-----------------Data of student: "<<i+1<<"----------------------"<<endl;
        cout<<"Roll No. : "<<st[i].roll<<endl;
        cout<<"Name : "<<st[i].name<<endl;
        cout<<"Age : "<<st[i].age<<endl;
        cout<<"Marks : "<<st[i].marks<<endl;
       }
    }

    return 0;
}