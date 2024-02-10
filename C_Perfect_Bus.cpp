#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool check(vector<lli> &a,lli mid)
{
    lli ini=mid;
    for(lli i=0;i<a.size();i++)
    {
        ini+=a[i];
        if(ini<0)
        return false;
    }
    return true;
}
int main()
{
    lli n;
    cin>>n;
    vector<lli> a(n);
    for(lli i=0;i<n;i++)
    cin>>a[i];

    lli strt=0,end=1000000000000000,ans=0;
    while(strt<=end)
    {
        lli mid=strt+((end-strt)/2);
       // cout<<mid<<endl;
        if(check(a,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else
        strt=mid+1;
    }    

    lli sum=ans;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }  
    cout<<sum;
}
