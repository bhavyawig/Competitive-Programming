#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
        lli n;
        cin>>n;
        priority_queue<pair<lli,lli>> pq;
        map<lli,lli> m;
        for(lli i=0;i<n;i++)
        {
            lli a,b;
            cin>>a>>b;
            pq.push({b,a});
            m[b]=i+1;
        }
        bool check=true;
        while(pq.empty()==false && check==true)
        {
            lli val=pq.top().first;
            lli ten=pq.top().second;
            if(ten<=10)
            {
                cout<<m[val]<<endl;
                check=false;
                break;
            }
            pq.pop();
        }
    }
    return 0;

}