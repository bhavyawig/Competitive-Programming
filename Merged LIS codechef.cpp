#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,m;
       cin>>n>>m;
       lli a[n],b[m];
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(lli i=0;i<m;i++)
       {
           cin>>b[i];
       }
       lli start=0,end=1;
              lli start1=0,end1=1;
        vector<lli> store,store1;
       while(start<=end)
       {
           if(a[end]>=a[start])
           {
               end++;
           }
           else
           {
               store.push_back(end-start);
               start=end;

           }
       }
       store.push_back(end-start);
       while(start1<=end1)
       {
           if(b[end1]>=b[start1])
           {
               end1++;
           }
           else
           {
               store1.push_back(end1-start1);
               start1=end1;

           }
       }
       lli ans=0;
       store1.push_back(end1-start1);
       sort(store.begin(),store.end());
       ans=ans+store[store.size()-1];
       sort(store1.begin(),store1.end());
       ans=ans+store1[store1.size()-1];
       cout<<ans<<endl;
   }

    return 0;
}

