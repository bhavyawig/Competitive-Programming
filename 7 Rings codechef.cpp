#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
     lli n,x;
     cin>>n>>x;
     lli ans=n*x;
     string s=to_string(ans);
     if(s.length()==5) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    }

    return 0;

}
