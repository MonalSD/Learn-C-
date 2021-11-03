// Write a function that takes your date of birth in YYYY, MM and DD format (separated by spaces) as input as well as the current date, in same format, and calculates your age in years, months and days. You must check for leap years also. Write a separate function to check for leap year.
#include<iostream>
using namespace std;

void age(int by,int bm,int bd,int cy,int cm,int cd)
{
    int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(bd>cd)
    {
        cd=cd+month[bm-1];
        cm=cm-1;
    }
    if(bm>cm)
    {
        cy=cy-1;
        cm=cm+12;
    }

    int cald =cd-bd;
    int calm = cm-bm;
    int caly = cy-by;

    cout<<"Present age in Years: "<<caly<<" Months: "<<calm<<" Days: "<<cald; 
}

int main()
{
    int YYYY,MM,DD;
    cout<<"Format for entering Date is YYYY MM DD \n";
    cout<<"Enter your date of birth: ";
    cin>>YYYY>>MM>>DD;
    cout<<"Enter today's date:";
    int YY,M,D;
    cin>>YY>>M>>D;

    age(YYYY,MM,DD,YY,M,D);
    return 0;
}