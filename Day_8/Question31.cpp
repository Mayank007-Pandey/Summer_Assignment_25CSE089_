#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
     n = n + 64;
    // Convert to corresponding uppercase ASCII value
    
    for(int i=65;i<=n;i++)
    {
        for(int j=65;j<=i;j++)
        {
            cout<<char(j)<<" " ;
        }
        cout<<endl;
    }









    return 0;
}