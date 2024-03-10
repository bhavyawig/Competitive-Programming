#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    vector<lli> a(n+2,0);
    for(lli i=1;i<=n;i++)
    {
        cin>>a[i];
    }   
    map<lli,lli> left,rig;
    for(int i=0;i<=n;i++)
    {
        rig[a[i]]=a[i+1];
        left[a[i+1]]=a[i];
    }
    lli q;
    cin>>q;
    for(lli i=0;i<q;i++)
    {
        lli type;
        cin>>type;
        if(type==1)
        {
            lli x,y;
            cin>>x>>y;
            lli rr=rig[x];
            left[y]=x;
            rig[y]=rr;
            rig[x]=left[rr]=y;
        }
        else
        {
            lli x1;
            cin>>x1;
            int ll=left[x1];
            int rr1=rig[x1];
            left.erase(x1);
            rig.erase(x1);
            rig[ll]=rr1;
            left[rr1]=ll;
        }
    }
     vector<int> ans;
    for (int a = 0; ; ) 
    {
      a = rig[a];
      if (!a) break;
      ans.push_back(a);
    }

    for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i];
    if(i!=ans.size()-1)
    cout<<" ";
   }
}
