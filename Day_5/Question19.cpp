#include<iostream>
using namespace std;
int main()
{
    int n,i ,p;
    cout<<"enter a number n"<<endl;
    cin>>n;
    cout<<"factors of number is"<<endl;
    for(i=1; i<=n; i++)
    {
       p=n%i ;
    
    if(p==0)
    {
        
    cout<<i<<endl;
    }
    }
    return 0;
}