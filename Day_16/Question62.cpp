#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,j,count,max=0,element;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        count=1;

        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }

        if(count>max)
        {
            max=count;
            element=a[i];
        }
    }

    cout<<"Element = "<<element<<endl;
    cout<<"Frequency = "<<max;

    return 0;
}