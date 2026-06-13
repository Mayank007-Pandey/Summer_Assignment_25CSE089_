#include<iostream>
using namespace std;
int main()
{
    int n,r,n1,j,sum=0,fact=1; 
    cout<<"enter a number n"<<endl;
    cin>>n;
    n1=n;
    
    while(n!=0)
    {
        
    r=n%10;
    fact=1;
    for(int j=1; j<=r; j++)
    {
        fact=fact*j;
    }
    sum=sum+fact;
    n=n/10;
    }
    if(sum==n1)
    {
        cout<<"the number is a strong number"<<endl;
    }
    else
    {
        cout<<"the number is not a strong number"<<endl;
    }
    return 0;
}