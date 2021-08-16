#include<bits/stdc++.h>
using namespace std;
 int accno[5],accbal[5];
 int i;
class bank{
public:
    bank(){
    int p=1000;
    for(i=0;i<5;i++)
    {
        accno[i]=1001+i;
    }
    for(i=0;i<5;i++)
    {
        accbal[i]=p;
        p=p+1000;
    }
    }

    int balance()
    {
        int acc;
        cout<<"Please enter your account no=";
        cin>>acc;
        for(i=0;i<5;i++)
        {
        if(accno[i]==acc)
        {
            cout<<"your current account balance is="<<accbal[i];
            return 1;
        }
        }
    }

         int withdraw()
    {
        int withdraw,acc;
        cout<<"please enter account no to withdraw=";
        cin>>acc;
        for(i=0;i<6;i++)
        {
        if(accno[i]==acc)
        {
            cout<<"how much amount you want to withdraw=";
        cin>>withdraw;
        if(withdraw<=accbal[i])
        {
        accbal[i]=accbal[i]-withdraw;
         cout<<"updated balance in your account="<<accbal[i];
         return 1;
        }
        else
        {
            cout<<"Insufficient balance in account";
            return 1;
        }
        }
        }
    }

      int deposit()
    {
        int dep,acc;
        cout<<"please enter account no to deposit=";
        cin>>acc;
    for(i=0;i<6;i++)
    {
        if(accno[i]==acc)
        {
        cout<<"how much amount you want to deposit=";
        cin>>dep;
        accbal[i]=accbal[i]+dep;
         cout<<"updated balance in your account="<<accbal[i];
         return 1;
        }
    }
    }

};
int main()
{
     int ch,q,w,e;
     bank b;
    cout<<"enter 1 for account details"<<endl<<"Enter 2 for withdraw"<<endl<<"Enter 3 for deposit"<<endl<<"Enter your choice=";
    cin>>ch;
    switch(ch)
    {
     case 1:
            q=b.balance();
            if(q!=1)
            {
              cout<<"invalid account no";
            }

            break;
    case 2:
            w=b.withdraw();
            if(w!=1)
            {
              cout<<"invalid account no";
            }
            break;
    case 3:
            e=b.deposit();
            if(e!=1)
            {
              cout<<"invalid account no";
            }
            break;
    default:
            cout<<"invalid choice";
    }
   return 0;
}
