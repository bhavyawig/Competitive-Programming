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
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            a[i]=a[i]-(i+1);
        }
        lli cnt=0,oh=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<0) cnt++;
            if(a[i]==0) oh++;
        }
        if(oh==n) cout<<n<<endl;
        else cout<<cnt<<endl;

    }

    return 0;

}
