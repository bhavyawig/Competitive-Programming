#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

vector<lli> input(vector<lli> inputvector,lli endlimit)
{
    for(lli i=0;i<endlimit;i++)
    {
        lli samplenumber;
        cin>>samplenumber;
        inputvector.push_back(samplenumber);
    }
    return inputvector;
}

int main()
{
    lli n,q;
    cin>>n>>q;
    vector<lli> a;
    for(int i=0;i<n;i++)
    {
        lli xq;
        cin>>xq;
        a.push_back(xq);
    }
    map<lli,vector<lli>> m;
    for(int i=0;i<n;i++)
    {
        m[a[i]].push_back(i+1);
    }
    for(int i=0;i<q;i++)
    {
        lli x,k;
        cin>>x>>k;
        if(m[x].size()<k)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<m[x][k-1]<<endl;
        }
    }

    return 0;
}

