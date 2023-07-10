#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   lli ans=0;
   vector<string> c,d;
   vector<lli> p;
   for(int i=0;i<n;i++)
   {
       string temp;
       cin>>temp;
       c.push_back(temp);
   }
   for(int i=0;i<m;i++)
   {
       string temp1;
       cin>>temp1;
       d.push_back(temp1);
   }
    for(int i=0;i<=m;i++)
   {
       lli temp11;
       cin>>temp11;
       p.push_back(temp11);
   }
   map<string,lli> m1;
   for(int i=0;i<m;i++)
   {
       m1[d[i]]=p[i+1];
   }
   for(int i=0;i<n;i++)
   {
       string yup=c[i];
       if(m1.find(yup)!=m1.end())
       {
           ans+=m1[yup];
       }
       else
       {
           ans+=p[0];
       }
   }
   cout<<ans<<endl;


    return 0;

}
