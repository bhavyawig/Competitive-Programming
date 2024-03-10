#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int> (n));
    vector<vector<int>> ans(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>vec[i][j];
            if(vec[i][j]==1)
            {
                ans[i].push_back(j+1);
            }
        }
    }
    for(auto itr: ans)
    {
        vector<int> uf=itr;
        for(auto it:uf)
        cout<<it<<" ";

        cout<<endl;
    }
}
