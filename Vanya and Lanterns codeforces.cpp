#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,l;
   cin>>n>>l;
   lli a[n],w[n-1];
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
   }
   lli q=sizeof(a)/sizeof(a[0]);
   sort(a,a+q);
   lli k=0,p=0;
   for(lli i=1;i<n;i++)
   {
       w[k]=a[i]-a[i-1];
       k++;
       p=k;
   }
   float max1=w[0];
   for(lli i=0;i<p;i++)
   {
       if(w[i]>=max1)
       {
           max1=w[i];
       }
   }
   //cout<<max1<<endl;
   double ans=max1/2.0;

   //cout<<fixed<<float(ans)<<endl;
   double x=a[0];
   double y=l-a[n-1];
   double z=max(x,y);
   double we=max(z,ans);
   cout<<fixed<<setprecision(20)<<we<<endl;
    //cout<<fixed<<max(float(ans),float(a[0]-0),float(l-a[n-1]));

    return 0;
}

