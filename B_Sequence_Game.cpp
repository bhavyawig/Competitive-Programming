#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(int e=0;e<test;e++)
    {
        lli n;
        cin>>n;
        vector<lli> b;
        for(int i=0;i<n;i++)
        {
            lli j; cin>>j;
            b.push_back(j);
        }
        vector<lli> ans;
        ans.push_back(b[0]);
        for(int i=1;i<b.size();i++)
        {
            if(b[i]==1 && i-1>=0 && b[i-1]>1)
            {
               // cout<<i<<endl;
                ans.push_back(1);
                ans.push_back(1);
            }
            else if(b[i]==1 && i-1>=0 && b[i-1]==1)
            {
               // cout<<i<<endl;
                ans.push_back(1);
            }
            else if(i==1 && b[0]==1)
            {
               // cout<<i<<endl;
                ans.push_back(b[i]);
            }
            else if(b[i]>=2 && b[i-1]==1)
            {
                ans.push_back(b[i]); 
            }
            else
            {
               // cout<<i<<endl;
                 ans.push_back(1);
                 ans.push_back(b[i]);
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}