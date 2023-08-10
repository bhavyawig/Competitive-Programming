#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
   int n,m;
   cin>>n>>m;
   vector<int> in(n+1,0);
   for(int i=0;i<m;i++)
   {
    lli a,b;
    cin>>a>>b;
    in[b]++;
   }
   int cnt=0,store=0;
   for(int i=1;i<=n;i++)
   {
    if(in[i]==0){
    cnt++;
    store=i;}
   }
     if(cnt==1) cout<<store<<endl;
     else
     cout<<"-1"<<endl;  
    return 0;
}