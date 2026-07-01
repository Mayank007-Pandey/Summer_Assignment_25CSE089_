#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,largest,smallest;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    largest=a[0];
    smallest=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
            largest=a[i];

        if(a[i]<smallest)
            smallest=a[i];
    }

    cout<<"Largest = "<<largest<<endl;
    cout<<"Smallest = "<<smallest;

    return 0;
}