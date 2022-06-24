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
       set<lli> s;
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
           s.insert(a[i]);
       }
       lli len=s.size(); //2
      // cout<<len<<endl;
       lli k=1;
       for(lli i=1;i<=n;i++)
       {
           if(i<=len)
           {
               cout<<len<<" ";
           }
           else
           {
               cout<<len+k<<" ";
               k++;
           }
       }
       s.clear();
       cout<<endl;
   }

    return 0;
}
