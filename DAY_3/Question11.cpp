#include<iostream>
using namespace std;
int main()
{
    int n1,n2,i,a1,a2,p;
    cout<<"enter two numbers n1 and n2"<<endl;
    cin>> n1>>n2;
    a1=n1;
    a2=n2;
    for(i=0 ; i<=n1; i++)
    {
        p= a1%a2;
        if(p==0)
        {
           break;
        }
        else{
            a1=a2;
            a2=p;
        }

    }
    cout<<"the gcd of "<<n1<<" and "<<n2<<" is "<<a2;
    return 0;
}