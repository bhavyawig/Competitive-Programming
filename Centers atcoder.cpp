#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[3*n];
  map<int,int> pr;
  vector<int> vis(n+1,0);
   for(int i=0;i<3*n;i++)
   {
       cin>>a[i];
       if(vis[a[i]]==0) vis[a[i]]=1;
       else if(vis[a[i]]==1){
        pr[i]=a[i];
        vis[a[i]]=2;
       }
   }
   for(auto itr:pr)
   {
       cout<<itr.second<<" ";
   }


    return 0;

}
