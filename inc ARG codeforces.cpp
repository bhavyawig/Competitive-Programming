#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   string s;
   cin>>s;
   lli cnt=0,val=0,zero=0;
   for(lli i=0;i<s.length();i++)
   {
       if(s[i]=='1')
       {
           val++;
       }
       else
       {
        cnt=max(cnt,val);
        val=0;
       }
       if(s[i]=='0')
        zero++;
   }
   if(zero==0)
    cout<<n;
   else
    cout<<cnt+1;



    return 0;
}

