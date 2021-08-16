#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,z;
    cin>>t;
     int j;
      for(j=0;j<t;j++)
      {
          int n,k,i,sum=0,add=0,k1=0,k2=0;
          cin>>n;cin>>k;
          int a[n];
          for(i=0;i<n;i++)
          {
              cin>>a[i];
          }
          int q = sizeof(a) / sizeof(a[0]);
          sort(a,a+q);
              for(i=n-1;i>=0;i=i-2)
              {
                  if(k1<k){
                  sum=sum+a[i];
                  k1++;
                  }
              }
              for(i=n-2;i>=0;i=i-2)
              {
                  if(k2<k){
                  add=add+a[i];
                  k2++;
                  z=i;
                  }
              }
              if(z!=0){
           add=add+a[z-1];}
          if(sum>=add)
          {
              cout<<sum<<endl;
          }
          else{
            cout<<add<<endl;
          }
      }
    return 0;
}
