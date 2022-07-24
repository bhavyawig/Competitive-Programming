#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   string s;
   cin>>s;
   lli cnt=0,cnt1=0;
   for(lli i=0;i<s.length();i++)
   {
       if(s[i]=='0')
        cnt++;
        if(s[i]=='1')
        cnt1++;
   }
   if(cnt1>=1)
   cout<<1;
   for(lli i=0;i<cnt;i++)
    cout<<0;

    return 0;
}

