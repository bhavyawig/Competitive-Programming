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
        string a,b,c;
        cin>>a>>b>>c;
        lli yes=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
                if (c[i] != a[i]) {
                    yes++;
            }
            }
            else
            {
                if(a[i]!=c[i] && c[i]!=b[i]) 
                yes++;
            }
        }
        if(yes>=1) cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}