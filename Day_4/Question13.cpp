#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,n,i;// fabonacci series
    cout<<"enter a number n"<<endl;
    cin>> n;
    cout<<"Fibonacci series: "<<a<<endl;
    cout<<"Fibonacci series: "<<b<<endl;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    
    cout<<"Fibonacci series: "<<c<<endl;
    }

    return 0;
}