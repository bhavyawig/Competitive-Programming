#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
    lli mod=1000000007;
int me(int base,int exp)
{
    int result =1;
    while(exp>0)
    {
        if(exp%2==1)
        {
            result=(1LL*result*base)%mod;
        }
        base=(1LL*base*base)%mod;
        exp/=2;
    }
    return result;
}

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
     lli n;
     cin>>n;
     lli a[n];
     lli even=0,sum=0,odd=0;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         if(a[i]%2==0) even++;
         else odd++;
         sum+=a[i];
     }
     lli ans=0;
     if(odd==0)
        ans=((me(2,even)-1+mod))%mod;
     else
        ans=me(2,even);
     cout<<ans<<endl;

    }

    return 0;

}
