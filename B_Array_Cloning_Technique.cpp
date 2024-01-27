#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(int y=0;y<t;y++)
    {
        lli n;
        cin>>n;
        map<int,int> m;
        lli a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        lli maxi=INT_MIN,no=0;
        for(auto itr:m)
        {
            if(itr.second>maxi)
            {
                maxi=itr.second;
                no =itr.first;
            }
        }
        lli ans=0;
        while (maxi<n) {
            lli dus=min(n-maxi,maxi);
            ans+=dus;
            ans++;
            maxi+=dus;
        }
         cout<<ans<<endl;
    }
}