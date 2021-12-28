// Write a program in C to add numbers using call by reference.
#include<iostream>
using namespace std;

int addtwo(int *n1,int *n2)
{
    int sum;
    sum =*n1+*n2;
  return sum;
}

int main()
{
    int fn,sn, sum;

    cin>>fn;
    cin>>sn;
    sum= addtwo(&fn,&sn);
    cout<<sum;

    return 0;
}