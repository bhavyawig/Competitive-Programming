#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(long long int e=0;e<t;e++)
    {
        long long int x,y,aans=0,bans=0;
        cin>>x;   cin>>y;
        long long int a,b;
        cin>>a;   cin>>b;
         aans=aans+((x+y)*a);
       if(x>y)
       {
           bans=bans+(y*b);
           x=x-y;
           bans=bans+(x*a);
       }
       else
       {
           bans=bans+(x*b);
           y=y-x;
           bans=bans+(y*a);
       }
       cout<<min(aans,bans)<<endl;
    }
    return 0;
}
