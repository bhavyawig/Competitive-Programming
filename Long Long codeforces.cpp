#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
     lli n;
     cin>>n;
     lli a[n];
     for(lli i=0;i<n;i++)
        cin>>a[i];
     lli cnt=0,ans=0,sum=0;
     vector<lli> b;
     lli check=0;
     for(int i=0;i<n;i++)
     {
         if(a[i]!=0){
            b.push_back(a[i]);
         }
     }
     for(lli i=0;i<b.size();i++)
     {
         sum+=abs(b[i]);
         if(b[i]<0) {cnt++; check++;}
         else if(b[i]>0 && check!=0 && cnt!=0)
         {
             cnt=0;
             ans++;
         }
     }
     if(cnt!=0) ans++;
     cout<<sum<<" "<<ans<<endl;
    }

    return 0;

}
