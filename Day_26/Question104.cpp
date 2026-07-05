#include<iostream>
using namespace std;

int main()
{
    int ans,score=0;

    cout<<"1. Capital of India?"<<endl;
    cout<<"1.Delhi 2.Mumbai 3.Kolkata 4.Chennai"<<endl;
    cin>>ans;

    if(ans==1)
        score++;

    cout<<"2. 5 + 7 = ?"<<endl;
    cout<<"1.10 2.11 3.12 4.13"<<endl;
    cin>>ans;

    if(ans==3)
        score++;

    cout<<"3. C++ developed by?"<<endl;
    cout<<"1.Bjarne Stroustrup 2.Dennis Ritchie 3.James Gosling 4.Guido"<<endl;
    cin>>ans;

    if(ans==1)
        score++;

    cout<<"Score = "<<score;

    return 0;
}