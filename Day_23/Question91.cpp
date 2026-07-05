#include<iostream>
using namespace std;

int main()
{
    char s1[100],s2[100];
    int i,j,temp;

    cin.getline(s1,100);
    cin.getline(s2,100);

    for(i=0;s1[i]!='\0';i++)
    {
        for(j=i+1;s1[j]!='\0';j++)
        {
            if(s1[i]>s1[j])
            {
                temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }
        }
    }

    for(i=0;s2[i]!='\0';i++)
    {
        for(j=i+1;s2[j]!='\0';j++)
        {
            if(s2[i]>s2[j])
            {
                temp=s2[i];
                s2[i]=s2[j];
                s2[j]=temp;
            }
        }
    }

    for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            cout<<"Not Anagram";
            return 0;
        }
    }

    cout<<"Anagram";

    return 0;
}