#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli t;
    cin>>t;
    for(lli e=0;e<t;e++){
        lli n;
        cin>>n;
        lli val=(n*(n-1))/2;
        map<lli,lli> m;
        for(int i=0;i<val;i++)
        {
            lli a;
            cin>>a;
            m[a]++;
        }
        vector<lli> ans;
        vector<lli> vec;
        int fuc=n-1;
        for(auto itr: m)
        {
            if(itr.second==fuc)
            {
                ans.push_back(itr.first);
                fuc--;
            }
            else
            {
                lli x=fuc,p=0;
                while(x>0 && itr.second!=p)
                {
                    p+=x;
                ans.push_back(itr.first);
                x--;
                }
                fuc=x;
            }
        }
        for(auto itr: ans)
        cout<<itr<<" ";
        int len=n-ans.size();
        lli oo=1e9;
        for(int i=0;i<len;i++)
        cout<<oo<<" ";
        cout<<endl;

    }
    return 0;
}