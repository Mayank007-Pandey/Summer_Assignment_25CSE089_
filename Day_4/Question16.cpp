#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n1,n2,i,sum;
    cout<<"enter a number n1"<<endl;
    cin>> n1;
    cout<<"enter a number n2"<<endl;
    cin>> n2;

    for( i=n1;i<=n2;i++)
    {
        int c=0;
        int i1=i;
        int i2=i;

    while(i2!=0)
    {
        /* code */
    
        i2=i2/10;
        c++;
    }
    int r=0;
    int sum=0;

        while(i1>0)
        {
            r=i1%10;
            sum=sum + pow(r,c);
            i1=i1/10;
            

        }
    
    

         if(sum==i)
            {
                cout<<"armstrong number"<<sum<<endl;
            }
    }
    
    
    

    return 0;
}