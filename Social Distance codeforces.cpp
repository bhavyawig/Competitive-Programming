#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,k;
       cin>>n>>k;
       lli ans=0,z=0;
       string s;
       cin>>s;
       vector<lli> a;
       lli len=s.length();
       if(n==1)
       {
           if(s[0]=='1')
           {
               ans=0;
           }
           else
           {
               ans=1;
           }
           cout<<ans<<endl;
       }
       else{
       for(lli i=0;i<len;i++)
       {
           if(s[i]!='1' && i==0)
           {
               a.push_back(-1);
           }
           else if(s[i]!='1' && i==len-1)
           {
               a.push_back(len);
           }
           else if(s[i]=='1')
           {
               a.push_back(i);
               z++;
           }
       }
       if(a.size()==2 && z==0)
       {
           if(k>=n)
           {
               cout<<"1"<<endl;
           }
           else if(n%2!=0 && k==1){
           cout<<(n/2) +1<<endl;
           }
           else
           {
               cout<<n/(k+1)<<endl;
           }
       }
       else{
           for(lli i=1;i<a.size();i++)
           {
              lli c=a[i]-a[i-1]-1;
              ans=ans+(c/(k+1));
       }

       cout<<ans<<endl;
       }
       }
   }

    return 0;
}

