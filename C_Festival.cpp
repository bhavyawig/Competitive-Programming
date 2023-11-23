#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,m;
    cin>>n>>m;
    vector<int> a(m);
    vector<int> vec(n,INT_MIN);
    for(int i=0;i<m;i++)
    {
        lli o; cin>>o;
        a[i]=0;
        vec[o-1]=0;
    }
    vector<int> pre(n);
    int up=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(vec[i]==0)
        {
            up=i;
        }
            pre[i]=up;
    }

      vector<int> suff(n);
    int up1=INT_MAX;
    for(int i=n-1;i>=0;i--)
    {
        if(vec[i]==0)
        {
            up1=i;
        }
            suff[i]=up1;
    }

    for(int i=0;i<n;i++)
    {
        if(vec[i]==INT_MIN)
        {
            //int aage=abs(i-pre[i]);
            int peeche=abs(i-suff[i]);
            vec[i]=peeche;
        }
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<pre[i]<<" ";
    // }
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<endl;
    }
    return 0;
}