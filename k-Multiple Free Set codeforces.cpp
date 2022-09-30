#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,k;
   cin>>n>>k;
   vector<lli>a;
   for(lli i=0;i<n;i++)
   {
       lli g;
       cin>>g;
       a.push_back(g);
   }
   vector<lli>::iterator itr;
   lli val[n+1]={0};
   for(lli i=0;i<n;i++)
   {
       lli no=a[i];
       lli dhundo=no*k;
       itr=find(a.begin(),a.end(),dhundo);
       if (itr!=a.end())
       {
           lli index=itr-a.begin();
           val[index]=-1;
           val[i]=1;
       }
   }
   for(lli i=1;i<n+1;i++)
   {
       val[i]=val[i-1]+val[i];
   }
   sort(val,val+n+1);
   cout<<val[n]+1<<endl;

    return 0;
}


