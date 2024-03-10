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
        lli cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        lli fir=a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]==fir)
            {
                cnt++;
            }
            else
            break;
        }
         lli last=a[n-1],cnt2=0;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==last)
            {
                cnt2++;
            }
            else
            break;
        }
        if(fir==last)
        {
            if(cnt+cnt2>=n) cout<<"0"<<endl;
            else
            cout<<n-(cnt+cnt2)<<endl;
        }
        else if(cnt>=cnt2)
        {
            cout<<n-cnt<<endl;
        }
        else
        cout<<n-cnt2<<endl;
    }
}
