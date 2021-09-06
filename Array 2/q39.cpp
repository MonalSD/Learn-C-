// Write a Program to Find the mean and median of an unsorted array.
#include<iostream>
using namespace std;

int main()
{
    int i,n,j,sum=0,temp;
    double a[100];
    double mean,median;
    cout<<"Size of Array:";
    cin>>n;
    cout<<"Insert Elements in Array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //Sort ARRAY:
    for(i=0;i<n;i++)
    {
        int si=i;
        for(int j=i;j<n;j++)
        {
            if(a[si]>a[j])
            {
                si=j;
            }
            temp=a[i];
            a[i]=a[si];
            a[si]=temp;
        }
    }
// MEAN:
for(i=0;i<n;i++)
{
        sum +=a[i];
}
mean = double(sum)/double(n);
cout<<"Mean = "<<mean<<endl;
// MEDIAN:
if(n%2 !=0)
{
    cout<<"Median: "<<(double)a[n/2];
}
else
{
    cout<<"Median: "<<(double)(a[(n-1)/2]+a[n/2])/2.0;
}


return 0;
}