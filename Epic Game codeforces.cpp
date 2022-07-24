#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli a,b,n;
   cin>>a>>b>>n;
   bool turn=true;
   lli ans;
   lli cnt=n;
   while(1)
   {
       if(turn==true)//simon
       {
           turn=false;
           ans=__gcd(a,cnt);
           if(cnt<0)
           {
               cout<<0<<endl;
               exit(0);
           }
           else
           cnt=cnt-ans;
       }
       else
       {
           turn=true;
           ans=__gcd(b,cnt);
           if(cnt<0)
           {
               cout<<1<<endl;
               exit(0);
           }
           else
            cnt=cnt-ans;
       }
   }

    return 0;
}

