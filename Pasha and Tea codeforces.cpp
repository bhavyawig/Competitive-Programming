#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,w;
   cin>>n>>w;
   double a[2*n];
   for(lli i=0;i<2*n;i++)
   {
       cin>>a[i];
   }
   sort(a,a+(2*n));
    double sum=0;
    double dd=double(a[n])/2;
   if(dd>=a[0])
   {
       sum+=(double(n)*a[0]);
      // cout<<sum<<endl;
       sum+=(double(n)*2*a[0]);
       //cout<<sum<<endl;
   }
   else
   {
      // cout<<sum<<endl;
     //  cout<<dd<<endl;
       sum+=(double(n)*dd);
       sum+=(double(n)*a[n]);
      // cout<<sum<<endl;
   }
   if(sum<=w)
   cout<<setprecision(13)<<sum<<endl;
   else
    cout<<w<<endl;


    return 0;
}

