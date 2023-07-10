#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
        lli n;
        cin>>n;
        vector<int> ans;
        lli b[n-1];
        for(int i=0;i<n-1;i++)
            cin>>b[i];
        ans.push_back(b[0]);
        for(int i=0;i<n-2;i++)
            ans.push_back(min(b[i],b[i+1]));
        ans.push_back(b[n-2]);
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }

    return 0;

}
