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
       {
           cin>>a[i];
       }
       for(lli i=0;i<n;i++)
       {
           lli b;
           cin>>b;
           string s;
           cin>>s;
           for(lli j=0;j<b;j++)
           {
               if(s[j]=='D')
               {
                   if(a[i]==9)
                    a[i]=0;
                   else
                   a[i]++;
               }
               else
               {
                   if(a[i]==0)
                    a[i]=9;
                   else
                   a[i]--;
               }
           }
       }
       for(lli i=0;i<n;i++)
        cout<<a[i]<<" " ;
       cout<<endl;
   }

    return 0;
}

