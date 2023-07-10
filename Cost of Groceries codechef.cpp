#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,x;
       cin>>n>>x;
       lli fresh[n],cost[n];
       for(lli i=0;i<n;i++)
        cin>>fresh[i];
       for(lli i=0;i<n;i++)
        cin>>cost[i];
        lli ans=0;
        for(lli i=0;i<n;i++)
        {
            if(fresh[i]>=x)
                ans+=cost[i];
        }
        cout<<ans<<endl;
   }

    return 0;
}


