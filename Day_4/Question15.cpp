#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,n1,n2,r,sum=0,c=0;
    cout<<"enter a number n"<<endl;
    cin>> n;
    n1=n;
    n2=n;
    while(n>0)
    {
        n=n/10;
        c++;
    }
        while(n1>0)
        {
            r=n1%10;
            sum=sum + pow(r,c);
            n1=n1/10;

        }
        cout<<c<<" "<<sum<<endl;

        
    
    if(sum==n2)
    {
        cout<<" not armstrong number"<<endl;
    }
    else
    {
        cout<<" armstrong number"<<endl;
    }
    return 0;
}