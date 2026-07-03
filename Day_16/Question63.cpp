#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,j,sum;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cin>>sum;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                cout<<a[i]<<" "<<a[j]<<endl;
            }
        }
    }

    return 0;
}