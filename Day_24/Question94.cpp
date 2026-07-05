#include<iostream>
using namespace std;

int main()
{
    char str[100];
    int i,count;

    cin.getline(str,100);

    for(i=0;str[i]!='\0';)
    {
        count=1;

        while(str[i]==str[i+1])
        {
            count++;
            i++;
        }

        cout<<str[i]<<count;
        i++;
    }

    return 0;
}