#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,k;
    cin>>n>>k;
    lli sum=0,maxi_a;
    priority_queue<pair<lli,lli>, vector<pair<lli,lli>>, greater<pair<lli,lli>>> pq;
    for(int i=0;i<n;i++)
    {
       lli a,b;
       cin>>a>>b;
        sum+=b;
        pq.push({a,b});
        maxi_a=max(maxi_a,a);
    }
    if(sum<=k)
    {
        cout<<"1"<<endl;
    }
    else{
            lli store=INT_MIN,check=0;
    while(pq.empty()==false)
    {
        lli val=pq.top().second;
        lli day=pq.top().first;
        pq.pop();
        sum-=val;
        if(sum<=k && check==0)
        {
            check++;
            store=day+1;
            break;
        }
    }
    if(store==INT_MIN)
    {
        cout<<maxi_a+1<<endl;
    }
    else
        cout<<store<<endl;
    }

    return 0;

}
