#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
       string s;
       cin>>s;
       lli m;
       cin>>m;
       lli count=0;
       for(lli i=0;i<m;i++)
       {
           lli x;
           char c;
           cin>>x>>c;
           for(lli j=0;j<x-1;j++)
           {
               if(s[j]==c)
               {
                   count++;
               }
           }
           s[x-1]=c;
           //cout<<s<<endl;
          // cout<<count<<endl;
       }
       cout<<count<<endl;


    return 0;
}
