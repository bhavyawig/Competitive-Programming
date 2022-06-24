#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   map<lli,lli> m,m2;
   lli pehla,dusra;
   for(lli i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
        m2[a[i]]++;
    }

   lli sec[n-1];
   for(lli i=0;i<n-1;i++){
    cin>>sec[i];
   m[sec[i]]--;
   }
   for(auto &itr:m)
   {
       if(itr.second==1)
       pehla=itr.first;
   }
   m2[pehla]--;
   lli teen[n-2];
   for(lli i=0;i<n-2;i++)
    {
        cin>>teen[i];
        m2[teen[i]]--;
    }
    for(auto &itr:m2)
    {
        if(itr.second==1)
        dusra=itr.first;
    }
   cout<<pehla<<endl<<dusra<<endl;



    return 0;
}

