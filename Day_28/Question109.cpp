#include<iostream>
using namespace std;

int main()
{
    int bookid;
    char title[50],author[50];

    cout<<"Enter Book ID: ";
    cin>>bookid;

    cin.ignore();

    cout<<"Enter Book Title: ";
    cin.getline(title,50);

    cout<<"Enter Author Name: ";
    cin.getline(author,50);

    cout<<"\nBook Details"<<endl;
    cout<<"Book ID = "<<bookid<<endl;
    cout<<"Title = "<<title<<endl;
    cout<<"Author = "<<author;

    return 0;
}