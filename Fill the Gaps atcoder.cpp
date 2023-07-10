#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];

   for(int i=0;i<n-1;i++)
   {
       if(abs(a[i]-a[i+1])==1)
       {
            if(i==0) cout<<a[i]<<" ";
           cout<<a[i+1]<<" ";
       }
       else
       {
           int no1=min(a[i],a[i+1]);
           int no2=max(a[i],a[i+1]);
           if(no1==a[i]){
                if(i==0) cout<<no1<<" ";
           for(int j=no1+1;j<=no2;j++)
            cout<<j<<" ";
           }
           else
           {
               if(i==0) cout<<no2<<" ";
               for(int j=no2-1;j>=no1;j--)
            cout<<j<<" ";
           }
       }
   }

    return 0;

}
