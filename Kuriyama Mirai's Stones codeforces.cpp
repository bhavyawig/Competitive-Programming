#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
       lli n;
       cin>>n;
       vector<lli> a,b,c,d;
       lli sum=0,sum1=0;
       for(lli i=0;i<n;i++)
       {
           lli samp;
           cin>>samp;
           a.push_back(samp);
           d.push_back(samp);
       }
       lli m;
       cin>>m;
       b.push_back(0);
       c.push_back(0);
       sort(d.begin(),d.end());
       for(lli i=0;i<n;i++)
       {
           sum1=sum1+d[i];
           c.push_back(sum1);
       }
       for(lli i=0;i<n;i++)
       {
           sum=sum+a[i];
           b.push_back(sum);
       }

       for(lli i=0;i<m;i++)
       {
           lli l,r,type;
           cin>>type>>l>>r;
           if(type==1)
           {
               cout<<b[r]-b[l-1]<<endl;
           }
           else
           {
               cout<<c[r]-c[l-1]<<endl;
           }
       }
    return 0;
}

