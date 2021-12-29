// Write a program to add, subtract and multiply two complex numbers using structures to function.
#include<iostream>
using namespace std;

struct complex{
    int real;
    int img;
};

struct complex add(struct complex a, struct complex b){
    struct complex d;
    d.real = a.real +b.real;
    d.img = a.img+b.img;
    return d;
}

struct complex sub(struct complex a, struct complex b){
    struct complex d;
    d.real = a.real - b.real;
    d.img = a.img - b.img;
    return d;
}

struct complex multiply(struct complex a, struct complex b){
    struct complex d;
    d.real = a.real*b.real - a.img*b.img;
    d.img = a.img*b.real + b.img*a.real;
    return d;
}

int main()
{
    struct complex d1 = {12,8};
    struct complex d2 = {14,11};

    struct complex d = add(d1,d2);
    struct complex e = sub(d1,d2);
    struct complex f = multiply(d1,d2);

    cout<<"ADD: "<< d.real<<" + "<<"i"<<d.img<<endl;
    cout<<"Subtract: "<< e.real<<" + "<<"i"<<e.img<<endl;
    cout<<"Multiply: "<< f.real<<" + "<<"i"<<f.img<<endl;

    return 0;
}