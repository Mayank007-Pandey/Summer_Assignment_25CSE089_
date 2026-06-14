#include<iostream>
using namespace std;
int main()
{
    int n,count=0,r;
    cout<<"enter a decimal number"<<endl;
    cin>>n;
    int binary=0;
    int lim=1;
    while(n>0)
    {
        binary =binary+(n%2)*lim;
        lim=lim*10;
        n=n/2;
    }
    cout<<"the binary number is "<<binary<<endl;
    while(binary>0)
    {
        
        r=binary%10;
        if(r==1)
        {
        count=count+1;
        }
        binary=binary/10;
    
    }
    
    cout<<"the number of bits in the binary number is "<<count<<endl;

    return 0;

}
