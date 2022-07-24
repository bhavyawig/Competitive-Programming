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
       lli temp=0;
       vector<lli> a;
       for(lli i=0;i<s.length();i++)
       {
           lli no=s[i]-'0';
           if(no%2!=0 && temp<2)
           {
               a.push_back(no);
               temp++;
           }
       }
       if(temp==0 || temp==1)
        cout<<-1<<endl;
       else
       {
           cout<<a[0]<<a[1]<<endl;
       }
   }

    return 0;
}

