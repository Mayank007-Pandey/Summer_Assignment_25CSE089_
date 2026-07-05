#include<iostream>
using namespace std;

int main()
{
    char str[100];
    int i,j=0;

    cin.getline(str,100);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            str[j]=str[i];
            j++;
        }
    }

    str[j]='\0';

    cout<<str;

    return 0;
}