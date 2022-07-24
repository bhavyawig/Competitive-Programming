#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli d[n];
   for(lli i=0;i<n;i++)
    cin>>d[i];
   lli s,t;
   cin>>s>>t;
   if(t<s)
   {
       lli cpy=s;
       s=t;
       t=cpy;
   }
   lli sum=0,sum1=0,u=0;
   for(int i=s;i<t;i++)
   {
        sum+=d[s-1+u];
        u++;
   }
   lli k=0;
    for(int i=s;i<t-1;i++)
   {
       if(s==1)
        k=n;
        sum1+=d[s-2+k];
       if(s-2+k==0){
        k=n;s=1;}
       k--;

   }
   cout<<min(sum,sum1)<<endl;
    return 0;
}

