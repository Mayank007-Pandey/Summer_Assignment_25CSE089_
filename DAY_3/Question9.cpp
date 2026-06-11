#include<iostream>
using namespace std;

int main()
{
    int n ,i ,c=0;
    cout<<"enter a number n"<<endl;
    cin>> n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
        {
            cout<<"prime number";
        }
        else
        {
            cout<<"not a prime number";
        }

    return 0;
    }
    
        
    
    



