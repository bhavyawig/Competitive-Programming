#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,t;
    cin>>n>>t;
    map<lli,lli> m;
    m[0]=n;
    vector<lli> vec(n,0);

    for(int i=0;i<t;i++)
    {
        lli a,b;
        cin>>a>>b;
        a--;
        lli curr=vec[a];
        lli banega=curr+b;
        m[banega]++;
        vec[a]=banega;
        if(m[curr]==1)
        {
            m.erase(curr);
        }
        else
        {
            m[curr]--;
        }

        cout<<m.size()<<endl;
    }
}
