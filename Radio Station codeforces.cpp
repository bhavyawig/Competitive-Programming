#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   map<string,string> mep;
   for(lli i=0;i<n;i++)
   {
       string a,b;
       cin>>a>>b;
       mep[b]=a;
   }
 //S  for(auto itr : mep)
    //cout<<itr.first<<" "<<itr.second;
   for(lli i=0;i<m;i++)
   {
       string d,e;
       cin>>d>>e;
   e.pop_back();
            cout<<d<<" "<<e<<"; #"<<mep[e]<<endl;
   }
    return 0;
}

