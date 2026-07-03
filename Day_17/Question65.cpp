#include<iostream>
using namespace std;

int main()
{
    int a[100],b[100],c[200];
    int n,m,i;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cin>>m;

    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }

    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }

    for(i=0;i<m;i++)
    {
        c[n+i]=b[i];
    }

    for(i=0;i<n+m;i++)
    {
        cout<<c[i]<<" ";
    }

    return 0;
}