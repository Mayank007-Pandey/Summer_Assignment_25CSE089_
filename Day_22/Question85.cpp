#include<iostream>
using namespace std;

int main()
{
    char str[100],temp;
    int i=0,j;

    cin.getline(str,100);

    while(str[i]!='\0')
    {
        i++;
    }

    j=i-1;

    for(i=0;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }

    i=0;

    while(str[i]!='\0')
    {
        i++;
    }

    j=i-1;

    int flag=1;

    for(i=0;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";

    return 0;
}