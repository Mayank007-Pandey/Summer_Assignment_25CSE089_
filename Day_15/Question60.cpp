#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,j=0,temp;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}