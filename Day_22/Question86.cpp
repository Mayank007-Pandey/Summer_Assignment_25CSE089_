#include<iostream>
using namespace std;

int main()
{
    char str[100];
    int i=0,count=1;

    cin.getline(str,100);

    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            count++;
        }

        i++;
    }

    cout<<"Words = "<<count;

    return 0;
}