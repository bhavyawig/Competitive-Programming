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
       vector<lli> a;
       set<lli> s;
       lli count=0,z=0;
       for(lli i=0;i<n;i++)
       {
           lli samp;
           cin>>samp;
           a.push_back(samp);
           s.insert(samp);
       }
      // sort(a.begin(),a.end());
       if(s.size()==1)
       {
           cout<<"0"<<endl;
       }
       else
       {
           lli last=0,count=0;
           for(lli i=n-1;i>=0;i--)
           {
               if(a[i]==a[n-1])
               {
                   last++;
               }
               else
               {
                   count++;
                   last=last*2;
                   i=n-last;
               }
           }
           cout<<count<<endl;
       }
   }

    return 0;
}

