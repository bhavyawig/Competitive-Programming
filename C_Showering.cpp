#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,s,m;
        cin>>n>>s>>m;
        lli ans=0,yip=0;
        vector<pair<lli,lli>> vec;
        for(lli i=0;i<n;i++)
        {
            lli x,y;
            cin>>x>>y;
            vec.push_back({x,y});
        }
        ans=vec[0].first;
        if(ans>=s) yip++;

        for(int i=1;i<n;i++)
        {
            int diff=vec[i].first-vec[i-1].second;
            if(diff>=s) yip++;
        }
        ans=m-vec[vec.size()-1].second;
         if(ans>=s) yip++;

         if(yip>=1) cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
    }
    return 0;
}


