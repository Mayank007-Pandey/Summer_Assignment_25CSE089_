#include<iostream>
using namespace std;

int armstrong(int n)
{
    int sum=0,temp=n,r;

    while(n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }

    if(sum==temp)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin>>n;

    if(armstrong(n))
        cout<<"Armstrong";
    else
        cout<<"Not Armstrong";

    return 0;
}