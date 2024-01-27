#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli ans=n;
   lli lst=1;
   while(n)
   {
      string uf=to_string(n);
      lli sum=0;
      for(int i=0;i<uf.length();i++)
      {
         sum+=uf[i]-'0';
      }
      string uf1=to_string(sum);
      if(uf1.length()==1)
      {
         n=0; 
         lst=stoi(uf1);
         break;
      }
      else
      {
         n=sum;
      }
   }
   cout<<ans*lst;
}