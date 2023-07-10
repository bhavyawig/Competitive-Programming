#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
        lli n,k;
        cin>>n>>k;
      lli a[n][n];
        for(lli i=0;i<n;i++)
        {
            for(lli j=0;j<n;j++)
            {
                 cin>>a[i][j];
            }
        }
     int check=0;
         for(lli i=0;i<n;i++)
        {
            for(lli j=0;j<n;j++)
            {
                 if(a[i][j]!=a[n-i-1][n-1-j]){
                    check++;
                    }
            }
        }
        check=check/2;
      if(check>k) cout<<"NO"<<endl;
      else
      {
          if(n%2==1) cout<<"YES"<<endl;
          else
          {
              int left=k-check;
              if(left%2==0) cout<<"YES"<<endl;
              else cout<<"NO"<<endl;
          }
      }

    }

    return 0;

}
