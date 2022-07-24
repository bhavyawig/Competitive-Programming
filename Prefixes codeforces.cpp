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
   for(lli i=0;i<n;i=i+2)
   {
       if(s[i]=='a' && s[i+1]=='a')
       {
           cnt++;
           s[i+1]='b';
       }
       else if(s[i]=='b' && s[i+1]=='b')
       {
           cnt++;
           s[i+1]='a';
       }
   }
   cout<<cnt<<endl;
   cout<<s;

    return 0;
}

