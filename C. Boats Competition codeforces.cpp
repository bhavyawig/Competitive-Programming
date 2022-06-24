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
       lli w[n];
       map<lli,lli> m,m2;
       for(lli i=0;i<n;i++){
        cin>>w[i];
        m[w[i]]++;
       }

       sort(w,w+n);
       lli maxi=INT_MIN,maxi2=INT_MIN,are=0,slast=0,cnt=1;
       for(auto &itr:m)
       {
           if(maxi==itr.second)
           {
               are=itr.second;
           }
           if(maxi<itr.second)
           {
               maxi=itr.second;
           }
           if(cnt<=m.size()-1)
           {
               cnt++;
               slast=itr.second;
           }
           /*  if(cnt==m.size())
           {
               last=itr.second;
           }   */
       }
       for(lli i=0;i<n/2;i++)
       {
           lli sum=w[i]+w[n-i-1];
           m2[sum]++;
       }
       for(auto &itr:m2)
       {
           if(maxi2<itr.second)
           {
               maxi2=itr.second;
           }
       }
       cout<<max(maxi/2,max(are,max(slast/2,maxi2)))<<endl;

   }

    return 0;
}

