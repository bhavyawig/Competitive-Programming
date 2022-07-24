#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   string s;
   cin>>s;
   lli cnt=0,left=0;
   lli maxi=n/11;
   for(lli i=0;i<s.length();i++)
   {
       if(s[i]=='8')
        cnt++;
   }
   if(cnt==0)
    cout<<0;
   else
   {
       if(cnt>maxi)
        cnt=maxi;
       left=n-cnt;
       if(left>=10*cnt)
        cout<<cnt;
       else
        cout<<left/10;
   }
    return 0;
}

