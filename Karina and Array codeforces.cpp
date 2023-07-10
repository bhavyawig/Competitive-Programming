#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
        lli n;
        cin>>n;
        lli a[n];
        for(lli i=0;i<n;i++)
           cin>>a[i];

        sort(a,a+n);
        lli ans1=a[0]*a[1];
        lli ans2=a[n-1]*a[n-2];
        cout<<max(ans1,ans2)<<endl;
    }

    return 0;

}
