#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
       string s;
       cin>>s;
       if(n==1)
        cout<<"no"<<endl;
       else if(n==2)
       {
           if(s[0]=='R' && s[1]=='B')
            cout<<"yes"<<endl;
           else if(s[0]=='B' && s[1]=='R')
            cout<<"yes"<<endl;
           else
            cout<<"no"<<endl;
       }
       else{
            lli notposs=0;
       for(lli i=0;i<n-2;i++)
       {
           if(s[i]=='W' && s[i+2]=='W' && s[i+1]!='W')
            notposs++;
       }
       for(lli i=0;i<n-2;i++)
       {
           if(s[i]=='R' && s[i+1]=='R' && s[i+2]=='R')
            notposs++;
           if(s[i]=='B' && s[i+1]=='B' && s[i+2]=='B')
            notposs++;
       }
       for(lli i=1;i<n-2;i++)
       {
           if(s[i]=='B' && s[i+1]=='B')
           {
               if(s[i-1]=='R' || s[i+2]=='R')
                continue;
               else
                notposs++;
           }
           if(s[i]=='R' && s[i+1]=='R')
           {
               if(s[i-1]=='B' || s[i+2]=='B')
                continue;
               else
                notposs++;
           }
       }
       if(s[0]=='B' && s[1]=='B' && s[2]!='R')
        notposs++;
        if(s[0]=='R' && s[1]=='R' && s[2]!='B')
        notposs++;
        if(s[n-1]=='R' && s[n-2]=='R' && s[n-3]!='B')
            notposs++;
        if(s[n-1]=='B' && s[n-2]=='B' && s[n-3]!='R')
            notposs++;
       if(s[0]=='R' && s[1]=='W')
        notposs++;
        if(s[0]=='B' && s[1]=='W')
        notposs++;
        if(s[n-2]=='W' && s[n-1]=='R')
            notposs++;
        if(s[n-2]=='W' && s[n-1]=='B')
            notposs++;
       if(notposs==0)
        cout<<"yes"<<endl;
       else
        cout<<"no"<<endl;
       }
   }

    return 0;
}

