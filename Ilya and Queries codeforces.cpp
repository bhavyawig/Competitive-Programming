#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s;
   cin>>s;
   lli m;
   cin>>m;
   lli cnt=0;
   lli uff[100002];
   for(lli i=1;i<s.size();i++)
   {
       if(s[i]==s[i-1])
        cnt++;

        uff[i]=cnt;
   }
   /*  for(lli i=0;i<s.size();i++)
    cout<<uff[i]<<" ";

   for(lli i=1;i<s.size();i++)
   {
       uff[i]+=uff[i-1];
   }
   for(lli i=0;i<s.size();i++)
    cout<<uff[i]<<" ";
    */

   for(lli i=0;i<m;i++)
   {
       lli l,r;
       cin>>l>>r;
       //if(l==1)
       // cout<<uff[r-2]-uff[0]<<endl;
      // else
       cout<<uff[r-1]-uff[l-1]<<endl;
   }

    return 0;
}

