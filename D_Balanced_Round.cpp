#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
        lli n,k;
        cin>>n>>k;
        lli a[n],b[n-1];
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
          //  b[i]=a[i];
        }
        sort(a,a+n);
        //sort(b,b+n);
        for(lli i=1;i<n;i++)
        {
            int val=a[i]-a[i-1];
            b[i-1]=val;
        }
        lli temp=0,ans=0;
        for(int i=0;i<n-1;i++)
        {
            if(b[i]<=k)
            temp++;
            else
            {
                ans=max(ans,temp);
                temp=0;
            }
        }
        ans=max(ans,temp);
        ans++;
        cout<<n-ans<<endl;
    }
    return 0;

}