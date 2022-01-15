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
   lli a[n],b[n];
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
       b[i]=a[i];
   }
   lli count=0,z=0;
   lli q=sizeof(b)/sizeof(b[0]);
   sort(b,b+q);
   while(1){
       for(lli i=0;i<n;i++)
       {
           z=0;
           if(b[i]==a[i])
           {
               z++;
           }
       }
       if(z==n)
       {
           cout<<count;
           exit(0);
       }
       if(a[0]>a[n-1])
       {
           count++;
              reversearr(a,0,n-1);
       }
       else
       {
           count++;
           lli x=a[0];
           for(lli i=0;i<n-1;i++)
           {
               a[i]=a[i+1];
           }
           a[n-1]=x;
       }
   }

    return 0;
}

