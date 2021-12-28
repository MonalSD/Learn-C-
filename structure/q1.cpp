// Write a program to store and print the roll no., name , age and marks of a student using structures.
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
        cout<<"-----------------Data of student: "<<i+1<<"----------------------"<<endl;
        cout<<"Roll No. : "<<st[i].roll<<endl;
        cout<<"Name : "<<st[i].name<<endl;
        cout<<"Age : "<<st[i].age<<endl;
        cout<<"Marks : "<<st[i].marks<<endl;
    }

    return 0;
}
