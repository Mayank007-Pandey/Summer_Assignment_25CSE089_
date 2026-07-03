#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,sum=0,total,missing;

    cin>>n;

    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }

    total=n*(n+1)/2;
    missing=total-sum;

    cout<<"Missing Number = "<<missing;

    return 0;
}