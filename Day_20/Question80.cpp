#include<iostream>
using namespace std;

int main()
{
    int a[10][10];
    int i,j,r,c,sum;

    cin>>r>>c;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    for(j=0;j<c;j++)
    {
        sum=0;

        for(i=0;i<r;i++)
        {
            sum=sum+a[i][j];
        }

        cout<<sum<<endl;
    }

    return 0;
}