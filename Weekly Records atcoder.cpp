#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[7*n];
   for(int i=0;i<7*n;i++)
    cin>>a[i];
    lli cnt=0,sum=0;
   for(int i=0;i<7*n;i++)
   {
       if(cnt<6)
       {
           sum+=a[i];
           cnt++;
      }
      else
      {
          sum+=a[i];
           cout<<sum<<" ";
           sum=0;
           cnt=0;
      }
   }
   if(sum!=0) cout<<sum<<endl;

    return 0;

}
