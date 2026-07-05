#include<iostream>
using namespace std;

int main()
{
    int id,quantity;
    float price,total;
    char item[50];

    cout<<"Enter Item ID: ";
    cin>>id;

    cin.ignore();

    cout<<"Enter Item Name: ";
    cin.getline(item,50);

    cout<<"Enter Quantity: ";
    cin>>quantity;

    cout<<"Enter Price: ";
    cin>>price;

    total=quantity*price;

    cout<<endl;
    cout<<"Item ID = "<<id<<endl;
    cout<<"Item Name = "<<item<<endl;
    cout<<"Quantity = "<<quantity<<endl;
    cout<<"Price = "<<price<<endl;
    cout<<"Total Amount = "<<total<<endl;

    return 0;
}