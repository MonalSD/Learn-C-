// Write a program that takes as input your gross salary and your total saving and uses another function named taxCalculator() to calculate your tax. The taxCalculator() function takes as parameters the gross salary as well as the total savings amount. The tax is calculated as follows:
//(a) The savings is deducted from the gross income to calculate the taxable income. Maximum deduction of savings can be Rs. 100,000, even though the amount can be more than this.
//(b) For up to 100,000 as taxable income the tax is 0 (Slab 0); beyond 100,000 to 200,000 tax is 10% of the difference above 100,000 (Slab 1); beyond 200,000 up to 500,000 the net tax is the tax calculated from Slab 0 and Slab 1 and then 20% of the taxable income exceeding 200,000 (Slab 2); if its more than 500,000, then the tax is tax from Slab 0, Slab 1, Slab 2 and 30% of the amount exceeding 500,000.

#include<iostream>
using namespace std;

int taxCalculator(int gs)
{
    if(gs>0 && gs<1000000)
    {
        return 0;
    }
    else if(100000<gs && gs<=200000)
    {
        return (0.1)*(gs-1000000);
    }
    else if(200000<gs && gs<=500000)
    {
        return 10000+(0.2)*(gs-2000000);
    }
    else
    {
        return 10000+60000+(0.3)*(gs-5000000);
    }
}

int main()
{
    int gs,ts;
    cout<<"Enter Your Gross salary: ";
    cin>>gs;
    cout<<"Enter Your Total Savings: ";
    cin>>ts;
    if(gs>ts)
    {
        if(0<ts && ts<=100000)
        {
            gs=ts-gs;
        }
        else
        {
            gs=gs-100000;
        }
    }

    cout<<"Tax:"<< taxCalculator(gs);
    return 0;

}