// A person is elligible to vote if his/her age is greater than or equal to 18. Define a function to find out if he/she is elligible to vote.
#include<iostream>
using namespace std;
void vote(int age){
    if(age>=18)
    {
        cout<<"Eligible To Vote";
    }
    else{
        cout<<"OOPS!,Sorry you are UNDERAGED";
    }
}

int main(){
    int n;
    cout<<"Insert AGE:";
    cin>>n;
    vote(n);
    return 0;
}