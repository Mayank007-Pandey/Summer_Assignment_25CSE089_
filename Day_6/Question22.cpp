#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int n;
   cout<<"enter a binary number"<<endl;
   cin>>n;
    int decimal=0;
    int i=0;
    while(n>0)
    {
        
        decimal=decimal+(n%10)*pow(2,i);
        n=n/10;
        i++;
    }

    cout<<"the decimal number is "<<decimal<<endl;

    return 0;
}