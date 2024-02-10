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
        string s;
        cin>>s;
        set<char> st;
        lli ans=0;
        for(lli i=0;i<n;i++)
        {
            st.insert(s[i]);
            ans+=st.size();
        }
        cout<<ans<<endl;
    }   
}
