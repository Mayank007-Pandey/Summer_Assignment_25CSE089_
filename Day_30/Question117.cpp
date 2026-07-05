#include<iostream>
using namespace std;

int main()
{
    int roll[10],marks[10],n,i;
    char name[10][50];

    cin>>n;
    cin.ignore();

    for(i=0;i<n;i++)
    {
        cin>>roll[i];
        cin.ignore();
        cin.getline(name[i],50);
        cin>>marks[i];
        cin.ignore();
    }

    cout<<"\nStudent Records\n";

    for(i=0;i<n;i++)
    {
        cout<<"Roll = "<<roll[i]<<endl;
        cout<<"Name = "<<name[i]<<endl;
        cout<<"Marks = "<<marks[i]<<endl<<endl;
    }

    return 0;
}