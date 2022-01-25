#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli v=0;v<test;v++)
   {
       lli n;
       cin>>n;
       lli x=0,z=0,q=0;
       lli d=0,e=0,f=0;
       vector<lli> s;
       for(lli i=2;i*i<=n;i++)
       {
           if(n%i==0 && x==0)
           {
               s.push_back(i);
               d=i;
               n=n/i;
               x++;
               break;
           }
       }
       for(lli i=2;i*i<=n;i++)
       {
           if(n%i==0 && z==0 && i!=d)
           {
               s.push_back(i);
               e=i;
               n=n/i;
               z++;
               break;
           }
       }
       if(s.size()<=1 || n==1 || d==e || e==n || n==d)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           cout<<"YES"<<endl;
           for(auto &itr:s)
           {
               cout<<itr<<" ";
           }
           cout<<n;
           cout<<endl;
       }


   }

    return 0;
}
