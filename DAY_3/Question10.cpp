#include<iostream>
using namespace std;
int main()
{
     int n ,i ,j;
    cout<<"enter a number n"<<endl;
    cin>> n;
    for(i=1;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        
        
        
    }   
         if(c==2)
             {
            cout<<"prime number: "<<i<<endl;
        }

    
         
    }
    return 0;
}
