// Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".

#include<iostream>
using namespace std;

struct date{
    int day;
    int month;
    int year;
};

void comp(struct date d1,struct date d2)
{
    if(d1.day==d2.day && d1.month==d2.month && d1.year==d2.year)
    cout<<"dates are equal";

    else
    cout<<"dates are not equal";

}

int main()
{
    struct date d1= {12,12,2003};
    struct date d2= {13,01,2008};
    struct date d3= {12,12,2000};
    struct date d4= {12,12,2003};

    comp(d1,d2);
    comp(d1,d4);
    comp(d1,d3);

    return 0;
}