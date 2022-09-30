#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   vector<lli> h;
   h.push_back(0);
   for(int i=0;i<n;i++)
   {
       lli f;
       cin>>f;
       h.push_back(f);
   }
  // for(int i=0;i<=n;i++)
    //cout<<h[i]<<" "<<endl;
   int cnt=0,total=0;
   for(int i=0;i<n;i++)
   {
       total+=h[i]-h[i+1];
       //cout<<total<<endl;
       if(total<0)
       {
  // cout<<h[i]<<" "<<endl;
           cnt+=abs(total);
           total=0;
          // cout<<cnt<<endl;
       }
   }
   cout<<cnt<<endl;


    return 0;
}


