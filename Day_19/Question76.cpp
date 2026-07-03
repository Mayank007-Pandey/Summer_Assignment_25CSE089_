#include<iostream>
using namespace std;

int main()
{
    int a[10][10];
    int i,j,n,sum=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        sum=sum+a[i][i];
    }

    cout<<"Diagonal Sum = "<<sum;

    return 0;
}