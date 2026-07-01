#include<iostream>
using namespace std;

int perfect(int n)
{
    int i,sum=0;

    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }

    if(sum==n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin>>n;

    if(perfect(n))
        cout<<"Perfect Number";
    else
        cout<<"Not Perfect Number";

    return 0;
}