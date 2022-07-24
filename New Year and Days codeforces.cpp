#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli no;
   cin>>no;
   string faltu,imp;
   cin>>faltu>>imp;
   if(imp[0]=='w')
   {
       if(no==5 || no==6)
        cout<<"53";
       else
        cout<<"52";
   }
   else
   {
       if(no<=29)
        cout<<"12";
       else if(no<=30)
        cout<<"11";
        else if(no<=31)
            cout<<"7";
   }
    return 0;
}

