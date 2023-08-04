#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    vector<lli> a;
    lli sum=0;
    for(lli i=0;i<n;i++)
    {
        lli o; cin>>o;
        a.push_back(o);
        sum+=o;
    }
    vector<vector<bool>> t(n+1, vector<bool> (sum+1));
    for(lli i=0;i<n+1;i++)
    t[i][0]=true;
    for(lli i=1;i<sum+1;i++)
    t[0][i]=false;
    for(lli i=1;i<n+1;i++)
    {
        for(lli j=1;j<sum+1;j++)
        {
            if(a[i-1]<=j)
            {
                t[i][j]=t[i-1][j] || t[i-1][j-a[i-1]];
            }
            else
            t[i][j]=t[i-1][j];
        }
    }
    vector<lli> vec;
    for(lli i=1;i<sum+1;i++)
    {
        if(t[n][i]==true)
        vec.push_back(i);
    }
    cout<<vec.size()<<endl;
    for(lli i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }

    return 0;
}