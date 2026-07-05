#include<iostream>
using namespace std;

int main()
{
    char str[100];
    int i,j;

    cin.getline(str,100);

    for(i=0;str[i]!='\0';i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                cout<<str[i];
                return 0;
            }
        }
    }

    cout<<"No Repeating Character";

    return 0;
}