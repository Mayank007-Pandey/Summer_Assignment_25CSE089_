#include<iostream>
using namespace std;

int main()
{
    int a[10][10];
    int i,j,n,flag=1;

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
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=0;
                break;
            }
        }
    }

    if(flag==1)
        cout<<"Symmetric Matrix";
    else
        cout<<"Not Symmetric Matrix";

    return 0;
}