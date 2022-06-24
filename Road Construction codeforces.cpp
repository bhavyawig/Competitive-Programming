#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   lli ar[n+1]={0};
   for(lli i=0;i<m;i++)
   {
       lli a,b;
       cin>>a>>b;
       ar[a]++;
       ar[b]++;
   }
   lli no=1;
   for(lli i=1;i<n+1;i++)
   {
       if(ar[i]==0)
       {
           no=i;
       }
   }
   lli k=1;
   cout<<n-1<<endl;
   for(lli i=0;i<n-1;i++)
   {
       if(k!=no){
       cout<<no<<" "<<k<<endl;
       k++;}
       else{
            k++;
        cout<<no<<" "<<k<<endl;
        k++;
       }
   }
   cout<<endl;

    return 0;
}
