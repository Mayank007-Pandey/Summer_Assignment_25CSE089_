#include<iostream>
using namespace std;

int main()
{
    char str[100],word[100],longest[100];
    int i=0,j=0,max=0;

    cin.getline(str,100);

    while(1)
    {
        if(str[i]==' '||str[i]=='\0')
        {
            word[j]='\0';

            if(j>max)
            {
                max=j;

                for(int k=0;k<=j;k++)
                {
                    longest[k]=word[k];
                }
            }

            j=0;

            if(str[i]=='\0')
                break;
        }
        else
        {
            word[j]=str[i];
            j++;
        }

        i++;
    }

    cout<<longest;

    return 0;
}