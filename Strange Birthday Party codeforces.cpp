#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,m;
       cin>>n>>m;
       lli c[m];
       vector<lli> k;
       for(lli i=0;i<n;i++)
       {
           lli samp;
           cin>>samp;
          k.push_back(samp);
       }
       for(lli i=1;i<=m;i++)
       {
           cin>>c[i];
       }
       sort(k.begin(),k.end());
       reverse(k.begin(),k.end());
       lli w=1,count=0;
       for(lli i=0;i<n;i++)
       {
           //cout<<c[w]<<c[k[i]]<<endl;
           if(w<=k[i] && w<=m && c[w]<c[k[i]] && k[i]<=m){
            count=count+c[w];
            //cout<<"gift"<<endl;
            //cout<<count<<endl;
            w++;
           }
           else
           {
               count=count+c[k[i]];
               //cout<<"paise"<<endl;
              // cout<<count<<endl;
           }
       }
       cout<<count<<endl;
   }

    return 0;
}

