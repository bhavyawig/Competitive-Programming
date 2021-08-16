#include<iostream>
#include<math.h>
using namespace std;
long long p;

int recursion(long long base, long long p,long long M)
{
    if(p%2==0)
        return ((pow(base,p/2)%M)* (pow(base,p/2)%M)%M;
    else
        return ((pow(base,p/2)%M) * (pow(base,p/2)%M) *base )%M;

}

int main()
{
      long long int t,i;
      cin>>t;
      long long int n,r,ans[t];
      int m=1000000007;
      for(i=0;i<t;i++)
      {
          cin>>n;
          if(n==1)
          {
              ans[i]=1;
          }
          else if(n==2)
          {
              ans[i]=2;
          }
          else if(n==3)
          {
              ans[i]=4;
          }
          else
          {
              ans[i]=recursion(2,n-1,m);
          }
      }
      for(i=0;i<t;i++)
      {
          cout<<ans[i]<<endl;
      }
      return 0;

}
