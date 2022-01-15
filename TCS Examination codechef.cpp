#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli dd,dt,dm;
       cin>>dd>>dt>>dm;
       lli sd,st,sm;
       cin>>sd>>st>>sm;
       lli totd=dd+dt+dm;
       lli tots=sd+st+sm;
       if(totd==tots)
       {
           if(dd>sd)
           {
               cout<<"DRAGON"<<endl;
           }
           else if(dd<sd)
           {
                cout<<"SLOTH"<<endl;
           }
           else
           {
               if(dt>st)
               {
                    cout<<"DRAGON"<<endl;
               }
               else if(dt<st)
               {
                    cout<<"SLOTH"<<endl;
               }
               else
               {
                   if(dm>sm)
                   {
                       cout<<"DRAGON"<<endl;
                   }
                   else if(dm<sm)
                   {
                        cout<<"SLOTH"<<endl;
                   }
                   else
                   {
                       cout<<"TIE"<<endl;
                   }
               }
           }
       }
       else if(totd>tots)
       {
            cout<<"DRAGON"<<endl;
       }
       else
       {
            cout<<"SLOTH"<<endl;
       }
   }

    return 0;
}

