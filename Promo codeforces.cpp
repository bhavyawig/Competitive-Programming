#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,q;
   cin>>n>>q;
   vector<lli> p;
   for(lli i=0;i<n;i++)
   {
       lli lo;
       cin>>lo;
       p.push_back(lo);
   }
   sort(p.begin(),p.end());
   reverse(p.begin(),p.end());
   lli newp[n];
   newp[0]=p[0];
   for(lli i=1;i<n;i++)
   {
       newp[i]=p[i]+newp[i-1];
   }
   for(lli i=0;i<q;i++)
   {
       lli x,y,ans;
       cin>>x>>y;
       if(x==y)
            ans=newp[x-1];
       else
        ans=newp[x-1]-newp[x-y-1];
        cout<<ans<<endl;
   }

    return 0;
}
