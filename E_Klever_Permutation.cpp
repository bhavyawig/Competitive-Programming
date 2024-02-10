#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,k,no=0;
        cin>>n>>k;
        vector<int> ans(n);

        for(int i=0;i<k;i++)
        {
            vector<int> pos;
            for(int j=i;j<n;j+=k)
            pos.push_back(j);

            if(i%2==0) reverse(pos.begin(),pos.end());

            for(auto itr: pos)
            {
                ans[itr]=no;
                no++;
            }
        }
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]+1<<" ";

        cout<<endl;
    }
}
