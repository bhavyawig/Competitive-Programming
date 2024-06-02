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
        vector<lli> a(n);
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
        }
        lli no=0;
        for(lli i=n-1;i>=2;i--)
        {
            if(a[i]<0)
            {
                no++;
                break;
            }
            int val=a[i];
            a[i-1]-=2*val;
            a[i]=0;
            a[i-2]-=val;
        }
        if(no>=1 || a[0]!=0 || a[1]!=0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}