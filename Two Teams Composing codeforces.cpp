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
       map<lli,lli> m;
       set<lli> s;
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
           m[a[i]]++;
           s.insert(a[i]);
       }
       lli ans=0,no=0;
       for(auto &itr:m)
       {
           if(ans<itr.second)
           {
               ans=itr.second;
               //no=itr.first;
           }
       }
       //cout<<ans<<endl; 5 3 4
       if(s.size()>ans)
       {
           cout<<ans<<endl;
       }
       else
       {
           if(s.size()==ans)
            cout<<s.size()-1<<endl;
            else if(s.size()+1==ans)
            cout<<s.size()<<endl;
           else
           cout<<s.size()<<endl;
       }
   }

    return 0;
}

