#include<iostream>
using namespace std;

int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,r,c1;

    cin>>r>>c1;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>b[i][j];
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}