#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,k;
   cin>>n>>k;
   vector<lli> a;
   for(lli i=0;i<n;i++)
   {
       lli samp;
       cin>>samp;
       a.push_back(samp);
   }
   sort(a.begin(),a.end());
   if(k==0)
   {
       bool ff=false;
       ff=binary_search(a.begin(),a.end(),1);
       if(ff==true)
       {
           cout<<"-1"<<endl;
       }
       else{
       cout<<"1"<<endl;
       }
   }
   else{
       lli no=a[k-1]; //5
       vector<lli>::iterator ans;
        ans=upper_bound(a.begin(),a.end(),no);
        if((ans-a.begin()-1)==(k-1))
        {
            cout<<no<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
   }


    return 0;
}

