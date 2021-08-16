#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin>>t;
      int j;
      for(j=0;j<t;j++)
      {
          int n,ans=0;
          cin>>n;
          int i;
          for(i=1;i<=n;i=i+2)
          {
              ans++;
          }
          cout<<ans<<endl;
      }
return 0;
}
