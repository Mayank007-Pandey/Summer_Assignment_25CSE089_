#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,key,found=0;

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
            cout<<"Element Found at Position "<<i+1;
            found=1;
            break;
        }
    }

    if(found==0)
    {
        cout<<"Element Not Found";
    }

    return 0;
}