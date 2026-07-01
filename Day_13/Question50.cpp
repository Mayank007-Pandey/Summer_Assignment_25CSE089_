#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,sum=0;
    float avg;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }

    avg=(float)sum/n;

    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<avg;

    return 0;
}