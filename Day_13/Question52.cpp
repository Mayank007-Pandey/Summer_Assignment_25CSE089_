#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,even=0,odd=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }

    cout<<"Even = "<<even<<endl;
    cout<<"Odd = "<<odd;

    return 0;
}