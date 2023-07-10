#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(int e=0;e<test;e++){
   lli n;
   cin>>n;
   string s,t;
   cin>>s>>t;
   int diff1=0,diff2=0;
   if(s==t) cout<<0<<endl;
   else
   {
       for(int i=0;i<n;i++)
       {
           if(s[i]!=t[i])
           {
               diff1++;
           }
       }
       reverse(s.begin(),s.end());
       if(s==t) cout<<2<<endl;
       else{
       for(int i=0;i<n;i++)
       {
           if(s[i]!=t[i])
           {
               diff2++;
           }
       }
        lli ans=0,ans1=0;
        if(diff1%2==0) ans1=2*diff1;
        else ans1=diff1+diff1-1;
        if(diff2%2==0) ans=diff2+diff2-1;
        else ans=diff2+diff2;
        cout<<min(ans,ans1)<<endl;
   }
   }
    }

    return 0;

}
