#include<iostream>
using namespace std;

int main()
{
    char str[100];
    int i=0,vowel=0,consonant=0;

    cin.getline(str,100);

    while(str[i]!='\0')
    {
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
        {
            if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
               str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                vowel++;
            else
                consonant++;
        }

        i++;
    }

    cout<<"Vowels = "<<vowel<<endl;
    cout<<"Consonants = "<<consonant;

    return 0;
}