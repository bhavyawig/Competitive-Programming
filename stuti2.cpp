#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    map<int,int> m;
    for(lli e=0;e<test;e++)
    {
       int vec; cin>>vec;
        m[vec]++;
       cout<<m[vec]<<" ";
    }
    int cnt=0;
     for (auto rit = m.rbegin(); rit != m.rend(); ++rit) {
      //  cout<<rit->second;
        if(rit->second==1)
        {
            cnt++;
          //  cout<<rit->first;
            m.erase(rit->first);
            int no=rit->first;
            if(no/2!=0)
            {
                m[no/2]++;
            }
        }
        else
        {
           // cout<<rit->first;
            m.erase(rit->first);
        }
    }
    cout<<cnt;
}
