#include<iostream>
using namespace std;
int main()
{
    int n, p,i,sum=0;
    cout<<"enter a number n"<<endl;
    cin>> n;
    for(i=1; i<n; i++)
    {
    p=n%i;
    if(p==0)
    {
        sum=sum+i;
    }
    }
    cout<<"sum: "<<sum<<endl;
    if(sum==n)
    {
        cout<<"perfect number"<<endl;
    }
    else
    {
        cout<<"not perfect number"<<endl;
    }
    return 0;

}