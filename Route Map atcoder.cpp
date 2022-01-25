#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   string s[n],t[m];
   for(lli i=0;i<n;i++)
   {
       cin>>s[i];
   }
   for(lli i=0;i<m;i++)
   {
       cin>>t[i];
   }
   lli q=sizeof(t)/sizeof(t[0]);
   sort(t,t+q);
   bool ans=false;
   for(lli i=0;i<n;i++)
   {
       ans=false;
       ans=binary_search(t,t+q,s[i]);
       if(ans==true)
       {
          cout<<"Yes"<<endl;
       }
       else
       {
           cout<<"No"<<endl;
       }
   }

    return 0;
}

