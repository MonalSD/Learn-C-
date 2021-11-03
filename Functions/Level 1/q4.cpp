//Define two functions to print the maximum and the minimum number respectively among three numbers entered by user
#include<iostream>
using namespace std;

int fmax(int a[],int n){
    int i,max;
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int fmin(int a[],int n){
    int i,min;
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}

int main(){
    int arr[50],i,max,min,size;
    cout<<"Insert No. of elements in array \n";
    cin>>size;
    for(i=0;i<size;i++)
    {
       cin>>arr[i]; 
    }

    max= fmax(arr,size);
    min= fmin(arr,size);

    cout<<"Maximum element in array is: "<<max<<"\n";
    cout<<"Minimum element in array is: "<<min<<"\n";

    return 0;

}