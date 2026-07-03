#include<iostream>
using namespace std;

int main()
{
    int a[100],b[100];
    int n,m,i,j,flag;

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
        cout<<a[i]<<" ";
    }

    for(i=0;i<m;i++)
    {
        flag=0;

        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            cout<<b[i]<<" ";
        }
    }

    return 0;
}