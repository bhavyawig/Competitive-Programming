#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int g,c;
        cin>>g;cin>>c;
        int ans;
        ans=(c*c)/(2*g);
        cout<<ans<<endl;
    }
    return 0;
}

