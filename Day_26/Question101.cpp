#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int num,guess;

    srand(time(0));
    num=rand()%100+1;

    do
    {
        cin>>guess;

        if(guess>num)
            cout<<"Too High"<<endl;
        else if(guess<num)
            cout<<"Too Low"<<endl;
        else
            cout<<"Correct";

    }while(guess!=num);

    return 0;
}