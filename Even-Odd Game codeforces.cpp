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
       vector<lli> v;
       lli alice=0,bob=0;
       for(lli i=0;i<n;i++)
       {
           lli a;
           cin>>a;
           v.push_back(a);
       }
       sort(v.begin(),v.end());
       bool turn=true;
       for(lli i=n-1;i>=0;i--)
       {
           if(turn==true)
           {
               turn=false;
               if(v[i]%2==0)
                alice+=v[i];
           }
           else
           {
               turn=true;
               if(v[i]%2!=0)
                bob+=v[i];
           }
       }
       //cout<<alice<<bob;
       if(alice==bob)
        cout<<"Tie"<<endl;
       else if(alice>bob)
        cout<<"Alice"<<endl;
       else
        cout<<"Bob"<<endl;
   }

    return 0;
}
