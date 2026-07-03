#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,largest,second;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    largest=second=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            second=largest;
            largest=a[i];
        }
        else if(a[i]>second && a[i]!=largest)
        {
            second=a[i];
        }
    }

    cout<<"Second Largest = "<<second;

    return 0;
}