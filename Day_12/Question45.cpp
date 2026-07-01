#include<iostream>
using namespace std;

int palindrome(int n)
{
    int rev=0,temp=n,r;

    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }

    if(temp==rev)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin>>n;

    if(palindrome(n))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";

    return 0;
}