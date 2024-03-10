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
        vector<lli> a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];

        sort(a.begin(),a.end());
        lli sum1=0,sum2=0;

        for(int i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                sum1+=(-1)*a[i];
            }
            else
            {
                sum2+=a[i];
            }
        }
        cout<<(sum1+sum2)<<endl;
    }
}
