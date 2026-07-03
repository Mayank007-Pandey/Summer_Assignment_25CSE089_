#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,key;
    int low,high,mid,found=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cin>>key;

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==key)
        {
            cout<<"Element Found at Position "<<mid+1;
            found=1;
            break;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    if(found==0)
    {
        cout<<"Element Not Found";
    }

    return 0;
}