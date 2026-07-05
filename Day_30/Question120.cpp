#include<iostream>
using namespace std;

void display(int roll[],char name[][50],int marks[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        cout<<"Roll = "<<roll[i]<<endl;
        cout<<"Name = "<<name[i]<<endl;
        cout<<"Marks = "<<marks[i]<<endl<<endl;
    }
}

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

    display(roll,name,marks,n);

    return 0;
}