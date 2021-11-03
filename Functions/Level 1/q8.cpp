// Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
#include<iostream>
using namespace std;

void grader(int arr[],int size)
{
    int n=arr[0];
    for(int i=0;i<size;i++)
    {
        if(n>90 && n<=100)
        {
            cout<<"MARKS: "<<arr[i]<<"  "<<"GRADE: AA \n";
        }
        else if(n>80 && n<=90)
        {
            cout<<"MARKS: "<<arr[i]<<"  "<<"GRADE: AB \n";
        }
        else if(n>70 && n<=80)
        {
            cout<<"MARKS: "<<arr[i]<<"  "<<"GRADE: BB \n"; 
        }
        else if(n>60 && n<=70)
        {
            cout<<"MARKS: "<<arr[i]<<"  "<<"GRADE: BC \n";
        }
        else if(n>50 && n<=60)
        {
            cout<<"MARKS: "<<arr[i]<<"  "<<"GRADE: CD \n";
        }
        else if(n>40 && n<=50)
        {
            cout<<"MARKS: "<<arr[i]<<"  "<<"GRADE: DD \n";
        }
        else
        {
            cout<<"MARKS: "<<arr[i]<<"  "<<"GRADE: FAIL";    
        }   
        n=arr[i];  
    }

}

int main(){
    int a[50],c,b;
    cout<<"Insert Size of Array:";
    cin>>b;
    cout<<"Insert Array:";
    for(c=0;c<b;c++)
    {
        cin>>a[c];
    }
    grader(a,b);
    return 0;


}