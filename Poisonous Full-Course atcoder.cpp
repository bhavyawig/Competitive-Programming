#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   vector<lli> x;
   vector<lli> y;
   for(lli i=0;i<n;i++)
   {
       lli x1,y1;
       cin>>x1>>y1;
       x.push_back(x1);
       y.push_back(y1);
   }
   lli cnt=0;
   vector<lli> pre(n,0);
   if(x[0]==1)
   pre[0]=y[0];
   else
    pre[0]=INT_MIN;
   for(int i=1;i<n;i++)
   {
       if(x[i]==1)
       pre[i]=max(pre[i-1],y[i]);
   else
    pre[i]=INT_MIN;
   }
  // for(int i=0;i<n;i++)
  // {
      // cout<<x[i]<<" "<<y[i]<<" "<<pre[i]<<endl;
  // }
    for(int i=0;i<n;i++)
    {
        if(x[i]==0)
        {
            lli ans1=cnt+y[i];
            lli ans2=0;
            if(i-1>=0)
           cnt=max(cnt,max(cnt+y[i],cnt+y[i]+pre[i-1]));
           else
            cnt=max(cnt,cnt+y[i]);
        }
    }
    //cout<<cnt;
    if(x[n-1]==1) cnt=max(cnt,cnt+pre[n-1]);
    cout<<cnt<<endl;


    return 0;

}
