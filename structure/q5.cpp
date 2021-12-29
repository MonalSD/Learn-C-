// Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
#include<iostream>
using namespace std;

struct student
{
    /* data */
    int roll;
    char name[25];
    int age;
    int chem_marks;
    int phy_marks;
    int maths_marks;
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
        cin>>st[i].chem_marks;
        cin>>st[i].phy_marks;
        cin>>st[i].maths_marks;
    }

    
    for(int i=0;i<n;i++)
    {
        cout<<"-----------------Data of student: "<<i+1<<"----------------------"<<endl;
        cout<<"Roll No. : "<<st[i].roll<<endl;
        cout<<"Name : "<<st[i].name<<endl;
        cout<<"Age : "<<st[i].age<<endl;
        cout<<"chem Marks : "<<st[i].chem_marks<<endl;
        cout<<"Phy Marks : "<<st[i].phy_marks<<endl;
        cout<<"Maths Marks : "<<st[i].maths_marks<<endl;
    }

    

    return 0;
}
