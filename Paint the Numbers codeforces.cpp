
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   vector<lli> a;
   bool vis[n];
   for(lli i=0;i<n;i++)
    vis[i]=false;
   for(lli i=0;i<n;i++)
   {
       lli p;
       cin>>p;
       a.push_back(p);
   }
   sort(a.begin(),a.end());
   lli count=0;
   for(lli i=0;i<n;i++)
   {
       if(vis[i]==false)
       {
           vis[i]==true;
           for(lli j=i+1;j<n;j++)
           {
               if(vis[j]==false && a[j]%a[i]==0)
                vis[j]=true;
           }
           count++;
       }
   }
   cout<<count;


    return 0;
}
