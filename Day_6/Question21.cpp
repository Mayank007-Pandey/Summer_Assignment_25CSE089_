#include<iostream>
using namespace std;
int main()
{
   int n;
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
    cout<<binary<<endl;





    return 0;
}


