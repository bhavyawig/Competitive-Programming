#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,q;
    cin>>n>>q;
    vector<pair<int,int>> a;
    for(int i=0;i<q;i++)
    {
        lli no;
        cin>>no;
        if(no==2)
        {
            lli p;
            cin>>p;
            if(p>a.size())
            {
                p-=a.size();
                cout<<p<<" "<<"0"<<endl;
            }
            else
            {
                cout<<a[a.size()-p].first<<" "<<a[a.size()-p].second<<endl;
            }
        }
        else
        {
            char uf; cin>>uf;
            int x,y;
            if(a.empty()==true)
            {
                x=1;y=0;
            }
            else
            {
                x=a.back().first; y=a.back().second;
            }
            if(uf=='R') x++;
            if(uf=='U') y++;
            if(uf=='L') x--;
            if(uf=='D') y--;
            a.push_back({x,y});
        }
    }
}