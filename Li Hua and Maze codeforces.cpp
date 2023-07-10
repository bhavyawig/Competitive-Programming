#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
        lli n,m;
        cin>>n>>m;
        lli ans=0,ans1=0;
        lli x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if((x1==1 && y1==1) || (x1==1 && y1==m) || (x1==n && y1==1) || (x1==n && y1==m))
        {
            ans=2;
        }
        else if(x1==1 || x1==n || y1==1 || y1==m)
        {
            ans=3;
        }
        else
            ans=4;

         if((x2==1 && y2==1) || (x2==1 && y2==m) || (x2==n && y2==1) || (x2==n && y2==m))
        {
            ans1=2;
        }
        else if(x2==1 || x2==n || y2==1 || y2==m)
        {
            ans1=3;
        }
        else
            ans1=4;

            cout<<min(ans,ans1)<<endl;
    }

    return 0;

}
