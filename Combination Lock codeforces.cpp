#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   string old,ne;
   cin>>old>>ne;
   lli cnt=0;
   for(lli i=0;i<old.length();i++)
   {
       lli ans1=abs((old[i]-'0')-(ne[i]-'0'));
       lli ans2=10-abs((old[i]-'0')-(ne[i]-'0'));
       cnt+=min(ans1,ans2);
     //  cout<<cnt<<endl;
   }
   cout<<cnt<<endl;
    return 0;
}

