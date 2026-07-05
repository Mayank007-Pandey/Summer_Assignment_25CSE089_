#include<iostream>
using namespace std;

int main()
{
    char name[50];
    long long phone;

    cin.ignore();

    cout<<"Enter Name: ";
    cin.getline(name,50);

    cout<<"Enter Phone Number: ";
    cin>>phone;

    cout<<"\nContact Details"<<endl;
    cout<<"Name = "<<name<<endl;
    cout<<"Phone = "<<phone;

    return 0;
}