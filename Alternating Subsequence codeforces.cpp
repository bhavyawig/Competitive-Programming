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
        cin>>a[i];

       vector<lli> ans;
       lli neg=INT_MIN,pos=0;
       for(lli i=0;i<n;i++)
       {
           if(a[i]>0)
           {
               if(neg!=INT_MIN)
               ans.push_back(neg);
               neg=INT_MIN;
               pos=max(pos,a[i]);
           }
           else
           {
               if(pos!=0)
               ans.push_back(pos);
               pos=0;
               neg=max(neg,a[i]);
           }
       }
       if(pos!=0)
        ans.push_back(pos);
       if(neg!=INT_MIN)
        ans.push_back(neg);
       //for(lli i=0;i<ans.size();i++)
        //cout<<"index is "<<i+1<<" element is "<<ans[i];
       //cout<<endl;
       lli sum=0;
       for(lli i=0;i<ans.size();i++)
        sum+=ans[i];
       cout<<sum<<endl;

   }
    return 0;
}

