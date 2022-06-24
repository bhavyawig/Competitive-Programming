#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    // n=1 m=3
   lli n,m;
   cin>>n>>m;
       lli count=0;
       // 10  1
      while(m!=n)
      {
          if(m>n){
          if(m%2==0)
          {
            m=m/2;
              count++;
          }
          else
          {
             count++;
              m++;
          }}
          else
          {
              m++;
              count++;
          }
      }

      cout<<count<<endl;


    return 0;
}

