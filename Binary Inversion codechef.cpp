#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,m,count=0;
       cin>>n>>m;
       string a[n];
       for(lli i=0;i<n;i++)
       {
           string s;
           cin>>s;
           a[i]=s;
       }
       lli q=sizeof(a)/sizeof(a[0]);
       sort(a,a+q);
       string p;
       for(lli i=0;i<n;i++)
       {
           p+=a[i];
       }
     //  cout<<p.length();
     lli one=0,answers=0;
       for(lli i=0;i<p.length();i++)
       {
           if(p[i]=='1')
           {
               one++;
           }
           else
           {
               answers+=one;
           }
       }
       cout<<answers<<endl;
   }
    return 0;
}

