#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
       lli a[n];
       for(lli i=0;i<n;i++)
        cin>>a[i];

        lli alice=0,bob=0;
        lli strt=0,ed=n-1;
        lli cnt=0,x=0,z=0,b=0;
        bool bhavya=true;
        while(strt<=ed)
        {
            if(bhavya)
            {
                cnt++;
                bhavya=false;
                while(alice<=bob && ed<=strt)
                {
                    alice+=a[strt];
                    strt++;
                }            }
            else
            {
                cnt++;
                bhavya=true;
                while(bob<=alice && ed<=strt)
                {
                    bob+=a[ed];
                    ed--;
                }
            }
        }
        if(strt==ed)
        {
            if(alice==bob)
            {
                bob+=a[strt];
                //cout<<"h";
            }
           else  if(alice<bob)
            {
                alice+=a[strt];
                cnt--;
            }
            else
            {
                cnt--;
                bob+=a[ed];
            }
        }
        cout<<cnt<<" "<<alice<<" "<<bob<<endl;

   }

    return 0;
}

