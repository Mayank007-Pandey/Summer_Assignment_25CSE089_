#include<iostream>
using namespace std;
int main()
{
    int n1,n2,a1,a2,p,gcd,lcm;
    cout<<"enter two numbers n1 and n2"<<endl;
    cin>> n1>>n2;
    a1=n1;
    a2=n2;
    for(int i=0 ; i<=n1; i++)
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
gcd=a2;
lcm=(n1*n2)/gcd;
cout<<"the gcd of "<<n1<<" and "<<n2<<" is "<<gcd<<endl;
cout<<"the lcm of "<<n1<<" and "<<n2<<" is "<<lcm;
return 0;
}