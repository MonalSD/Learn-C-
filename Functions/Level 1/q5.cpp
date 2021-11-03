// Define a program to find out whether a given number is even or odd.
#include<iostream>
using namespace std;

void eo(int n){
    if(n%2==0){
        cout<<"No. is EVEN";
    }
    else{
        cout<<"No. is ODD";
    }
}

int main(){
    int a;
    cout<<"Insert No.:";
    cin>>a;
    eo(a);
    return 0;

}