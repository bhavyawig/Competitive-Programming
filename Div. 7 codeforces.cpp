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
       if(n%7==0)
       {
           cout<<n<<endl;
       }
       else
       {
           lli cnt=0,cnt1=0,x=0,x1=0;
           for(lli i=n;i<=1001;i++)
           {
               if(i%7!=0 && x==0)
               {
                   cnt++;
               }
               else
               {
                   x++;
               }
           }
           for(lli i=n;i>=7;i--)
           {
               if(i%7!=0 && x1==0)
               {
                   cnt1++;
               }
               else
               {
                   x1++;
               }
           }
           lli ans1=n+cnt;
           lli ans2=n-cnt1;
           string vv=to_string(ans1);
           string cc=to_string(ans2);
           string org=to_string(n);
           lli les=0,mor=0;
           for(lli i=0;i<org.length();i++)
           {
               if(org[i]!=cc[i])
               {
                   les++;
               }
               if(org[i]!=vv[i])
               {
                   mor++;
               }
           }
           if(les==1)
           {
               cout<<ans2<<endl;
           }
           else
           {
               cout<<ans1<<endl;
           }
       }
   }

    return 0;
}

