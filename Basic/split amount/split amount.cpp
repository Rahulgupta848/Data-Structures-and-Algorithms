/*
Spliting amount.
*/
#include<iostream>
using namespace std;
int main()
{
    int a ,ans =0;
    cout<<"enter the amount"<<endl;
    cin>>a;
    while(a!=0)
    {
        int flag;
        if(a>100)
        {
            flag=100;
             ans=a/100;
            a=a%100;
        }
        else if(a>50)
        {
            flag=50;
             ans=a/50;
            a=a%50;
        }
        else if(a>10)
        {
            flag=10;
             ans=a/10;
            a=a%10;
        }
        else
        {
            flag=1;
             ans=a/1;
            a=a%1;
        }

        switch(flag)
        {
            case 100:
            cout<<"number of 100 notes are "<<ans<<endl; 
                break;

            case 50:
            cout<<"number of 50 notes are "<<ans<<endl; 
                break;

            case 10:
            cout<<"number of 10 notes are "<<ans<<endl; 
                break;

            case 1:
            cout<<"number of 1 notes are "<<ans<<endl; 
                break;

        }

    }
    return 0;
}