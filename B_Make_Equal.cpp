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
        lli a[n];
        vector<int> ans;
        lli sum=0;
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        lli val=sum/n;

        for(lli i=0;i<n;i++)
        {
           ans.push_back(val-a[i]);
        }
        int no=0;
        if(ans[0]>=1) no++;
        for(int i=1;i<ans.size();i++)
        {
            ans[i]+=ans[i-1];
            if(ans[i]>=1)
            {
                no++;
                break;
            }
        }
        if(no==0) cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
