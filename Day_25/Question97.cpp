#include<iostream>
using namespace std;

int main()
{
    int a[100],b[100],c[200];
    int n,m,i,j,k=0;

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

    i=0;
    j=0;

    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
        k++;
    }

    while(i<n)
    {
        c[k]=a[i];
        i++;
        k++;
    }

    while(j<m)
    {
        c[k]=b[j];
        j++;
        k++;
    }

    for(i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }

    return 0;
}