#include<iostream>
using namespace std;

int main()
{
    int accno;
    char name[50];
    float balance,amount;

    cout<<"Enter Account Number: ";
    cin>>accno;

    cin.ignore();

    cout<<"Enter Name: ";
    cin.getline(name,50);

    cout<<"Enter Balance: ";
    cin>>balance;

    cout<<"Enter Deposit Amount: ";
    cin>>amount;

    balance=balance+amount;

    cout<<"Updated Balance = "<<balance;

    return 0;
}