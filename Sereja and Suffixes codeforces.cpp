#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   lli a[n],aree[n];
   set<lli> s;
   map<lli,lli> me;
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
       s.insert(a[i]);
       me[a[i]]++;
   }
   for(lli i=0;i<n;i++)
   {
       me[a[i]]--;
       if(me[a[i]]>0)
       {
           s.erase(a[i]);
           aree[i]=s.size();
       }
       else
        aree[i]=s.size();
   }
   for(lli i=0;i<m;i++)
   {
       lli no;
       cin>>no;
       cout<<aree[n-no]<<endl;
   }


    return 0;
}

