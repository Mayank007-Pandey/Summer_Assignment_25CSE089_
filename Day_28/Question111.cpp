#include<iostream>
using namespace std;

int main()
{
    char name[50];
    int seats;
    float fare,total;

    cin.ignore();

    cout<<"Enter Passenger Name: ";
    cin.getline(name,50);

    cout<<"Enter Number of Seats: ";
    cin>>seats;

    cout<<"Enter Fare Per Seat: ";
    cin>>fare;

    total=seats*fare;

    cout<<"\nTicket Booked"<<endl;
    cout<<"Passenger = "<<name<<endl;
    cout<<"Total Fare = "<<total;

    return 0;
}