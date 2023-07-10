#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
     lli n,m,h;
     cin>>n>>m>>h;
     lli a[n];
     for(lli i=0;i<n;i++){
        cin>>a[i];}
     lli power[m];
     for(lli i=0;i<m;i++){
        cin>>power[i];}
         sort(a,a+n);
    for(lli i=0;i<m;i++)
        {
            power[i]=power[i]*h;
        }
    sort(power,power+m);
    lli p1=m-1,a1=n-1,ans=0;
    for(int i=0;i<min(n,m);i++)
    {
        if(p1>=0 && a1>=0)
        {
            ans+=min(power[p1],a[a1]);
            a1--; p1--;
        }
        else
            break;
    }
    cout<<ans<<endl;
    }

    return 0;

}
