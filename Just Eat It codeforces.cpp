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
       bool ans=false;
       lli sum=0;
       vector<lli> a;
       for(lli i=0;i<n;i++)
       {
           lli samp;
           cin>>samp;
           a.push_back(samp);
       }
       for(lli i=0;i<n;i++)
       {
           sum=sum+a[i];
       }
       lli starts=0,ends=0;
       for(lli i=0;i<n-1;i++)
       {
           starts=starts+(a[i]);
           if(starts>=sum )
           {
               ans=true;
              // cout<<"here";
           }
       }

       for(lli i=n-1;i>0;i--)
       {
           ends=ends+a[i];
          if(ends>=sum)
          {
              ans=true;
          }
       }
       if(ans==true)
       {
           cout<<"no"<<endl;
       }
       else
       {
           cout<<"yes"<<endl;
       }

    }

    return 0;
}

