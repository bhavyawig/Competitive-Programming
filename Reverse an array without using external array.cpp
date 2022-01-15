
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

void reversearr(lli arr[],lli strt,lli ed)
{
    if(strt>=ed)
    {
        return;
    }
    lli temp;
    temp=arr[strt];
    arr[strt]=arr[ed];
    arr[ed]=temp;
    reversearr(arr,strt+1,ed-1);
}

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
   }
   reversearr(a,0,n-1);

   for(lli i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
    return 0;
}
