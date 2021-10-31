#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
        lli n,m,sum=0;
        cin>>n>>m;
        vector<pair<lli,lli>> v;
        for(lli i=0;i<m;i++)
        {
            lli a,b;
            cin>>a>>b;
            v.push_back(make_pair(b,a));
        }
        sort(v.begin(),v.end());
        for(lli i=m-1;i>=0;i--)
        {
            if(n<=v[i].second)
            {
                sum=sum+(n*v[i].first);
                n=0;
                break;
            }
            else
            {
                if(n>0){
                sum=sum+((v[i].first)*(v[i].second));
                n=n-v[i].second;}
            }
        }
        cout<<sum<<endl;
    return 0;
}

