
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    double time=0,ans=0;
    int n;
    cin>>n;
    double a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        time+=a[i]/b[i];
    }
    time=time/2;
    for(int i=0;i<n;i++)
    {
        if(time>a[i]/b[i])
        {
            time-=a[i]/b[i];
            ans+=a[i];
        }
        else
        {
            ans+=time*b[i];
            cout<<setprecision(7)<<ans<<endl;
            exit(0);
        }
    }
    return 0;
}
