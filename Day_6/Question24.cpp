#include<iostream>
using namespace std;
int main()
{
  int n,i,x,prod=1;

  cout<<"Enter the value of n: ";
  cin>>n;
  cout<<"Enter the value of x: ";
  cin>>x;

  for(i=1;i<=n; i++)
  {
    prod=prod*x;
  }

  cout<<"The value of x^n is: "<<prod<<endl;


    return 0;
}