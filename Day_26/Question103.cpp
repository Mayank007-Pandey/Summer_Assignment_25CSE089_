#include<iostream>
using namespace std;

int main()
{
    int choice;
    float balance=5000,amount;

    do
    {
        cout<<"1.Deposit"<<endl;
        cout<<"2.Withdraw"<<endl;
        cout<<"3.Check Balance"<<endl;
        cout<<"4.Exit"<<endl;

        cin>>choice;

        switch(choice)
        {
            case 1:
                cin>>amount;
                balance+=amount;
                break;

            case 2:
                cin>>amount;

                if(amount<=balance)
                    balance-=amount;
                else
                    cout<<"Insufficient Balance"<<endl;

                break;

            case 3:
                cout<<"Balance = "<<balance<<endl;
                break;
        }

    }while(choice!=4);

    return 0;
}