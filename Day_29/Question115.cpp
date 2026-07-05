#include<iostream>
using namespace std;

int main()
{
    char str[100];
    int choice,i;

    cin.getline(str,100);

    do
    {
        cout<<"1.Display"<<endl;
        cout<<"2.Length"<<endl;
        cout<<"3.Uppercase"<<endl;
        cout<<"4.Exit"<<endl;

        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<str<<endl;
                break;

            case 2:
                i=0;
                while(str[i]!='\0')
                    i++;
                cout<<"Length = "<<i<<endl;
                break;

            case 3:
                for(i=0;str[i]!='\0';i++)
                {
                    if(str[i]>='a'&&str[i]<='z')
                        str[i]-=32;
                }
                cout<<str<<endl;
                break;
        }

    }while(choice!=4);

    return 0;
}