#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   map<string,lli> mp,chk;
   vector<string> str;
   vector<lli> no;
   for(lli e=0;e<n;e++)
   {
       string s;
       lli lo;
       cin>>s;
       cin>>lo;
       mp[s]+=lo;
       str.push_back(s);
       no.push_back(lo);
   }
   lli maxi=INT_MIN;
   for(auto itr:mp)
   {
       if(maxi<itr.second)
        maxi=itr.second;
   }
   string ans="";
   lli tuti=0;
   for(lli i=0;i<n;i++)
   {
       chk[str[i]]+=no[i];
       if(chk[str[i]]>=maxi && tuti==0 && mp[str[i]]==maxi){
        ans=str[i];
        tuti++;
        }
   }
   cout<<ans<<endl;
    return 0;
}


