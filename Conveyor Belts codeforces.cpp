#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
        lli n,x1,y1,x2,y2;
        cin>>n>>x1>>y1>>x2>>y2;
        int ans1=min(x1,min(y1,min(n+1-x1,n+1-y1)));
        int ans2=min(x2,min(y2,min(n+1-x2,n+1-y2)));
        cout<<abs(ans1-ans2)<<endl;
    }

    return 0;

}
