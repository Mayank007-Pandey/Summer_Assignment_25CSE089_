#include<iostream>
using namespace std;

int main()
{
    char str[100];
    int i,j,flag;

    cin.getline(str,100);

    for(i=0;str[i]!='\0';i++)
    {
        flag=0;

        for(j=0;j<i;j++)
        {
            if(str[i]==str[j])
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            cout<<str[i];
        }
    }

    return 0;
}