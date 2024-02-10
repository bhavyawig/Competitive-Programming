#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n;
        cin>>n;
        lli a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> ini;
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1])
            {
                ini.push_back(i-1);
            }
        }
        lli q;
        cin>>q;
        for(int i=0;i<q;i++)
        {
            lli l,r; cin>>l>>r;
            l--; r--;
            if(ini.size()>=1){
        
            vector<int>::iterator  lower;
    lower = lower_bound(ini.begin(), ini.end(), l);
     if (lower != ini.end()){
        int index=lower-ini.begin();
        if(ini[index]>=l && ini[index]+1<=r)
        {
            cout<<ini[index]+1<<" "<<ini[index]+2<<endl;
        }
        else
        cout<<"-1 -1"<<endl;
     }
     else cout<<"-1 -1"<<endl;
        }

        else
        cout<<"-1 -1"<<endl;

        }
        cout<<endl;
    }
}
