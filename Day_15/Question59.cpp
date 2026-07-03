#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,temp;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    temp=a[n-1];

    for(i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }

    a[0]=temp;

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}