#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,choice,sum=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    do
    {
        cout<<"1.Display"<<endl;
        cout<<"2.Sum"<<endl;
        cout<<"3.Maximum"<<endl;
        cout<<"4.Exit"<<endl;

        cin>>choice;

        switch(choice)
        {
            case 1:
                for(i=0;i<n;i++)
                    cout<<a[i]<<" ";
                cout<<endl;
                break;

            case 2:
                sum=0;
                for(i=0;i<n;i++)
                    sum+=a[i];
                cout<<"Sum = "<<sum<<endl;
                break;

            case 3:
                int max=a[0];
                for(i=1;i<n;i++)
                {
                    if(a[i]>max)
                        max=a[i];
                }
                cout<<"Maximum = "<<max<<endl;
                break;
        }

    }while(choice!=4);

    return 0;
}