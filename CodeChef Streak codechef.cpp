#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
     lli n;
     cin>>n;
     lli a[n],om[n];
     lli ans=INT_MIN,cnt=0,ans1=INT_MIN;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         if(a[i]>=1) cnt++;
         else
         {
             ans=max(ans,cnt);
             cnt=0;
         }
     }
     ans=max(ans,cnt);
             cnt=0;
            for(int i=0;i<n;i++)
     {
         cin>>om[i];
         if(om[i]>=1) cnt++;
         else
         {
             ans1=max(ans1,cnt);
             cnt=0;
         }
     }
     ans1=max(ans1,cnt);
             cnt=0;
             if(ans1==ans) cout<<"DRAW"<<endl;
             else if(ans>ans1) cout<<"OM"<<endl;
             else cout<<"ADDY"<<endl;

    }

    return 0;

}
