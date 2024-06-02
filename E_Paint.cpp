#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli h,w,m;
   cin>>h>>w>>m;
   map<lli,lli> r,c,ans;
   set<lli> s,s1;
   vector<lli> t(m),a(m),x(m);
   lli cnt=0,total=0;
   for(lli i=0;i<m;i++)
   {
    cin>>t[i]>>a[i]>>x[i];
    if(t[i]==1)
    {
        r[a[i]]=x[i]; 
    }
    else
    {
        c[a[i]]=x[i];
    }
   }
   //for(auto itr: c)
 //  cout<<itr.first<<" "<<itr.second<<endl;

   for(lli i=m-1;i>=0;i--)
   {
    if(t[i]==2)
    {
        if(s.find(a[i])==s.end())
        cnt++;
        s.insert(a[i]);
    }
    else
    {
        if(r[a[i]]==x[i] && x[i]!=0 && w-cnt>=1 && s1.find(a[i])==s1.end())
        {
        lli col=r[a[i]];
        ans[col]+=(w-cnt);
        // cout<<w-cnt;
        total+=(w-cnt);
        s1.insert(a[i]);
        }
    }
   }
   cnt=0;
   set<lli> ss1,ss;
   for(lli i=m-1;i>=0;i--)
   {
    if(t[i]==1)
    {
        if(ss.find(a[i])==ss.end())
        cnt++;
        ss.insert(a[i]);
    }
    else
    {
        if(c[a[i]]==x[i] && x[i]!=0 && h-cnt>=1 && ss1.find(a[i])==ss1.end()){
        lli col=c[a[i]];
        ans[col]+=(h-cnt);
        total+=(h-cnt);
        ss1.insert(a[i]);
        }
    }
   }
   //cout<<total<<endl;
   lli zerocnt=(h*w)-total;
   if(zerocnt>=1)
   ans[0]=zerocnt;
   lli uf=0;
   for(auto itr: ans)
   {
    if(itr.second!=0)
       uf++;
   }
   cout<<uf<<endl;
   for(auto itr: ans)
   {
    if(itr.second!=0)
    cout<<itr.first<<" "<<itr.second<<endl;
   }
}