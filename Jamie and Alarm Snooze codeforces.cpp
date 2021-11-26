#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli x;
   cin>>x;
   lli h,m;
   cin>>h>>m;
   lli ans=0,p=0;
   if(h==7 || h==17 || m==7 || m==17 || m==27 || m==37 || m==47 || m==57)
       {
           cout<<ans<<endl;
           exit(0);
       }
       else{
   for(lli i=0;i>=0;i++)
   {
       if(m>=x)
       {
           m=m-x;
       }
       else
       {
           p=m;
           m=60;
           h--;
           if(h==0)
           {
               h=24;
           }
           else if(h<0)
           {
               h=23;
           }
           m=m-(x-p);
          // cout<<m<<endl;
        }
       if(h==7 || h==17 || m==7 || m==17 || m==27 || m==37 || m==47 || m==57)
       {
           cout<<ans+1<<endl;
           exit(0);
       }
       else
       {
           ans++;
       }

   }
       }

    return 0;
}

