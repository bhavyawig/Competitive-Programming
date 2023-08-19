#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli t;
   cin>>t;
   for(lli e=0;e<t;e++)
   {
    lli n;
    cin>>n;
    vector<lli> ans;
    vector<lli> vis(n+1,0);
    lli check=0,val=0;
    for(lli i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            check=0;
            ans.push_back(i);
            val=i;
            while(check==0)
            {
                if(val*2<=n && vis[val*2]==0)
                {
                    ans.push_back(val*2);
                    vis[val*2]=1;
                    val=val*2;
                }
                else
                check=1;
            }
        }
    }
    for(lli i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
   }
    return 0;
}