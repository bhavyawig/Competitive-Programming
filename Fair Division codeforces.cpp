#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int n,cnt1=0,cnt2=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                cnt1++;
            }
            if(a[i]==2)
            {
                cnt2++;
            }
        }
        int ans=(cnt1*1)+(cnt2*2);
        if(ans%2==0 && cnt1==0 && cnt2%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(ans%2==0 && cnt2==0 && cnt1%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(ans%2==0 && cnt1%2==0 && cnt2%2!=0 && cnt1>=1)
        {
            cout<<"YES"<<endl;
        }
        else if(ans%2==0 && cnt2%2==0 && cnt1%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

