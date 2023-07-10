#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   int mod=1000000007;
   for(lli e=0;e<test;e++)
    {
     lli n,k;
     cin>>n>>k;
     string s;
     cin>>s;
     vector<int> vec,sec;
     for(int i=0;i<n;i++)
     {
         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') vec.push_back(i);
     }
     int cnt=0;
     long long int ans=1;
     for(int i=0;i<vec.size();i++)
     {
         cnt++;
         if(cnt==k && i!=vec.size()-1)
         {
             int val=vec[i+1]-vec[i];
             sec.push_back(val);
             cnt=0;
         }
     }
     for(int i=0;i<sec.size();i++)
     {
         ans=(((ans%mod)*(sec[i]%mod))%mod)%mod;
         if(ans<0) ans+=mod;
     }
     cout<<ans<<endl;
    }

    return 0;

}
