#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,s,k;
       cin>>n>>s>>k;
       lli a[k];
       map<lli,lli> m;
       map<lli,lli>::iterator itr;
       lli store=INT_MAX,store2=INT_MAX,q=0;
//               lli vis[n+1]={0};
       for(lli i=0;i<k;i++){
        cin>>a[i];
        m[a[i]]++;
  //      vis[a[i]]=1;
       }
        for(lli i=s;i>s-pow(10,3)+1;i--)
        {
           itr=m.lower_bound(i);
           if(itr==m.end())
            q++;
           else
           {
               store=itr->first;
               break;
           }
        }
        for(lli i=s;i<=s+pow(10,3)+1;i++)
        {
         itr=m.lower_bound(i);
           if(itr==m.end())
            q++;
           else
           {
               store2=itr->first;
               break;
           }
        }
        cout<<min(s-store,store2-s)<<endl;

   }

    return 0;
}


