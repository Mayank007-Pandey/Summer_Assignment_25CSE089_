#include<iostream>
using namespace std;

int main()
{
    char str[100],ch;
    int i=0,count=0;

    cin.getline(str,100);
    cin>>ch;

    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            count++;
        }
        i++;
    }

    cout<<"Frequency = "<<count;

    return 0;
}