#include<iostream>
using namespace std;

int main()
{
    int roll,marks;
    char name[50];

    cout<<"Enter Roll Number: ";
    cin>>roll;

    cin.ignore();

    cout<<"Enter Name: ";
    cin.getline(name,50);

    cout<<"Enter Marks: ";
    cin>>marks;

    cout<<"\nStudent Record"<<endl;
    cout<<"Roll Number = "<<roll<<endl;
    cout<<"Name = "<<name<<endl;
    cout<<"Marks = "<<marks;

    return 0;
}