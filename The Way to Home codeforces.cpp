#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,d;
   cin>>n>>d;
   string a;
   lli arr[n];
   fill(arr,arr+n,INT_MAX);
   cin>>a;
   arr[0]=0;
   for(lli i=0;i<n;i++)
   {
       if(a[i]=='1')
       {
           for(lli j=0;j<=d;j++)
           {
               if(i+j<n && a[i+j]=='1')
               {
                   arr[i+j]=min(arr[i+j],arr[i]+1);
               }
           }
       }
   }
   if(arr[n-1]==INT_MAX)
    cout<<-1<<endl;
   else
    cout<<arr[n-1]<<endl;

    return 0;
}
