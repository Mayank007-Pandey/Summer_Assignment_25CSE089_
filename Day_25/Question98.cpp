#include<iostream>
using namespace std;

int main()
{
    char s1[100],s2[100];
    int i,j;

    cin.getline(s1,100);
    cin.getline(s2,100);

    for(i=0;s1[i]!='\0';i++)
    {
        for(j=0;s2[j]!='\0';j++)
        {
            if(s1[i]==s2[j])
            {
                cout<<s1[i]<<" ";
                break;
            }
        }
    }

    return 0;
}