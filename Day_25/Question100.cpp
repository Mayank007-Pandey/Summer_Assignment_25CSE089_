#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char word[10][50],temp[50];
    int n,i,j;

    cin>>n;
    cin.ignore();

    for(i=0;i<n;i++)
    {
        cin.getline(word[i],50);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strlen(word[i])>strlen(word[j]))
            {
                strcpy(temp,word[i]);
                strcpy(word[i],word[j]);
                strcpy(word[j],temp);
            }
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<word[i]<<endl;
    }

    return 0;
}