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
       lli cnt=0;
       string ans1,ans2;
       for(lli i=0;i<n;i++)
       {
           if(s[i]=='2' && cnt==0)
           {
               ans1+='1';
               ans2+='1';
           }
           else if(s[i]=='2' && cnt>0)
           {
               ans1+='0';
               ans2+='2';
           }
           else if(s[i]=='0')
           {
               ans1+='0';
               ans2+='0';
           }
           else if(s[i]=='1' && cnt==0)
           {
               ans1+='1';
               ans2+='0';
               cnt++;
              /* int sub=stoi(ans1);
               int sub2=stoi(ans2);
               if(sub<=sub2)
               {
                   ans1+='1';
                   ans2+='0';
               }
               else
               {
                   ans1+='0';
                   ans2+='1';
               }*/
           }
           else if(s[i]=='1')
           {
               ans1+='0';
               ans2+='1';
           }
           }

       cout<<ans1<<endl;
       cout<<ans2<<endl;
   }



    return 0;
}
