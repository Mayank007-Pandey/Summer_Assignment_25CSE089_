#include<iostream>
using namespace std;

int main()
{
    int id;
    float salary;
    char name[50];

    cout<<"Enter Employee ID: ";
    cin>>id;

    cin.ignore();

    cout<<"Enter Employee Name: ";
    cin.getline(name,50);

    cout<<"Enter Salary: ";
    cin>>salary;

    cout<<"\nEmployee Details"<<endl;
    cout<<"ID = "<<id<<endl;
    cout<<"Name = "<<name<<endl;
    cout<<"Salary = "<<salary;

    return 0;
}