#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,key,count=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cin>>key;

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            count++;
        }
    }

    cout<<"Frequency = "<<count;

    return 0;
}