#include<iostream>
using namespace std;

int main()
{
    int choice;
    float a,b;

    do
    {
        cout<<"1.Add"<<endl;
        cout<<"2.Subtract"<<endl;
        cout<<"3.Multiply"<<endl;
        cout<<"4.Divide"<<endl;
        cout<<"5.Exit"<<endl;

        cin>>choice;

        if(choice>=1 && choice<=4)
        {
            cin>>a>>b;
        }

        switch(choice)
        {
            case 1:
                cout<<"Result = "<<a+b<<endl;
                break;

            case 2:
                cout<<"Result = "<<a-b<<endl;
                break;

            case 3:
                cout<<"Result = "<<a*b<<endl;
                break;

            case 4:
                if(b!=0)
                    cout<<"Result = "<<a/b<<endl;
                else
                    cout<<"Division by Zero"<<endl;
                break;

            case 5:
                break;

            default:
                cout<<"Invalid Choice"<<endl;
        }

    }while(choice!=5);

    return 0;
}