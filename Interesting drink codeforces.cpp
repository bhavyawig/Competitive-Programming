#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
    vector<lli> a;
    for(lli i=0;i<n;i++)
    {
        lli sample;
        cin>>sample;
        a.push_back(sample);
    }
    sort(a.begin(),a.end());
    lli q;
    cin>>q;
    vector<lli>::iterator itr;
    for(lli i=0;i<q;i++)
    {
        lli m;
        cin>>m;
        itr=upper_bound(a.begin(),a.end(),m);
        cout<<itr-a.begin()<<endl;
    }

    return 0;
}

