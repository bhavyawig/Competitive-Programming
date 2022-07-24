#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   sort(s.begin(),s.end());
  // cout<<"string "<<s<<endl;
   char al='a';
   map<char,lli> m;
   for(lli i=1;i<=26;i++)
   {
       //cout<<al;
       m[al]=i;
       al++;
   }
   string ans;
   ans+=s[0];
   lli temp=1;
   lli p=0;
   for(lli i=1;i<n;i++)
   {
       if(m[s[i]]-m[ans[p]]>=2 && temp<k)
       {
           ans+=s[i];
           temp++;p++;
       }
   }
   //cout<<"ans "<<ans<<endl;
  // cout<<"temp is "<<temp<<endl;
   if(temp==k)
   {
       lli sum=0;
       for(lli i=0;i<ans.length();i++)
       {
           sum+=m[ans[i]];
       }
       cout<<sum;
   }
   else
   {
       cout<<-1<<endl;
   }

    return 0;
}

