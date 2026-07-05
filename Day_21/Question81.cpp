#include<iostream>
using namespace std;

int main()
{
    char str[100];
    int i=0;

    cin.getline(str,100);

    while(str[i]!='\0')
    {
        i++;
    }

    cout<<"Length = "<<i;

    return 0;
}