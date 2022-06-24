#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,k;
       cin>>n>>k;
       vector<lli> a;
       for(lli i=0;i<n;i++){
            lli samp;
       cin>>samp;
        a.push_back(samp);}

       sort(a.begin(),a.end());
       lli z=0;
       bool ans=false;
       for(lli i=0;i<n;i++)
       {
           lli no=a[i]+k;
           ans=binary_search(a.begin(),a.end(),no);
           if(ans==true)
            z++;
       }
       if(z>=1)
        cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
   }

    return 0;
}

