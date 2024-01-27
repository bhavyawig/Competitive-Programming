#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
        lli n,f,a1,b;
        cin>>n>>f>>a1>>b;
        lli prev=0;

        lli a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];

        lli no=0;
        for(int i=0;i<n;i++)
        {
            lli uf=min((a[i]-prev)*a1,b);
            f-=uf;
            if(f<=0)
            {
                no++;
                break;
            }
            prev=a[i];
        }
        if(no==0) cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}