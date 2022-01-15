#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
      string p,h;
      cin>>p>>h;
      int z=0;
      sort(p.begin(),p.end());
      int plen=p.length();
      int hlen=h.length();
      int dup=plen;
      string nn;
      for(int i=0;i<=hlen-plen;i++)
      {
          for(int j=i;j<plen+i;j++)
          {
              nn+=h[j];
          }
          sort(nn.begin(),nn.end());
          if(nn==p)
          {
              z++;
              break;
          }
          else{
            nn="";
          }
      }
      if(z==0)
      {
          cout<<"NO"<<endl;
      }
      else
      {
          cout<<"YES"<<endl;
      }
   }

    return 0;
}
