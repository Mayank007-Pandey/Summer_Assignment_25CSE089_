#include<iostream>
using namespace std;
int main()
{
    int n,i,p,j,c;
    cout<<"enter a number n"<<endl;
    cin>>n;
    cout<<"prime largest factors of number is"<<endl;
    for(i=1;i<=n;i++)
    {
        p=n%i;
        if(p==0)
        {
            c=0;
            for( j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c=c+1;
                }
                
            }
             if(c==2)
            {
                cout<<i<<endl;
            }
            
        }

    }
    
            return 0;
}