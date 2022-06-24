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
       vector<lli> a;
       lli count=0;
       map<lli,lli> mp;
       for(lli i=0;i<n;i++)
       {
           lli samp;
           cin>>samp;
           a.push_back(samp);
           mp[samp]++;
       }
       sort(a.begin(),a.end());
       for(auto &m:a)
       {
           lli nll=m*x;
           //cout<<nll<<endl;
           bool ans=false;
           ans=binary_search(a.begin(),a.end(),nll);
           if(ans==true && mp[nll]>0 && mp[m]>0){
                mp[nll]--;
           mp[m]--;
                //cout<<"inside"<<nll<<endl;
           }
           else if(mp[m]>0 && mp[nll]==0)
           {
               count++;
               mp[m]--;
              //  a.erase(a.begin()+m);
           }
       }
       cout<<count<<endl;
   }

    return 0;
}
