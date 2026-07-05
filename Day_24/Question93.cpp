#include<iostream>
using namespace std;

int main()
{
    char s1[100],s2[100],temp[200];
    int i=0,j=0;

    cin.getline(s1,100);
    cin.getline(s2,100);

    while(s1[i]!='\0')
    {
        temp[j]=s1[i];
        j++;
        i++;
    }

    i=0;

    while(s1[i]!='\0')
    {
        temp[j]=s1[i];
        j++;
        i++;
    }

    temp[j]='\0';

    for(i=0;temp[i]!='\0';i++)
    {
        j=0;

        while(s2[j]!='\0' && temp[i+j]==s2[j])
        {
            j++;
        }

        if(s2[j]=='\0')
        {
            cout<<"Rotation";
            return 0;
        }
    }

    cout<<"Not Rotation";

    return 0;
}