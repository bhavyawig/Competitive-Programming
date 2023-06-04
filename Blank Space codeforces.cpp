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
      lli a[n];
      lli cnt=0,ans=0;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        if(a[i]==0)
            cnt++;
        else
        {
            ans=max(ans,cnt);
            cnt=0;
        }
      }
      ans=max(ans,cnt);
      cout<<ans<<endl;
    }

    return 0;

}
