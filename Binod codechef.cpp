#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,q;
       cin>>n>>q;
       lli a[n];
       for(lli i=0;i<n;i++)
           cin>>a[i];
       lli no[61][n];
       for(lli i=0;i<n;i++)
       {
           lli lo=a[i];
           for (lli j=0;j<=60;j++) {
        no[j][i]=(lo%2);
        lo/=2;
    }
    }
    lli sum=0;
    for(lli j=0;j<=60;j++)
    {
        for(lli i=0;i<n;i++)
        {
            sum+=no[j][i];
            no[j][i]=sum;
        }
        sum=0;
    }
       for(lli i=0;i<q;i++)
       {
           lli k,l1,r1,l2,r2;
           cin>>k>>l1>>r1>>l2>>r2;
           long long int totalf=r1-l1+1;
           long long  int totals=r2-l2+1;
            long long int totalfo,totalso;
           if(l1==0)
            {
                totalfo=no[k][r1];
            }
            else
            {
                totalfo=no[k][r1]-no[k][l1-1];
            }
            if(l2==0)
            {
                totalso=no[k][r2];
            }
            else totalso=no[k][r2]-no[k][l2-1];
            long sum=(long)(totalf-totalfo)*(long)(totalso)+ (long)(totalfo)*(long)(totals-totalso);
            cout<<sum<<endl;
       }
   }

    return 0;
}


