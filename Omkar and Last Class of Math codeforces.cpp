#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool is_prime(lli n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
       if(n%2==0)
       {
           cout<<n/2<<" "<<n/2<<endl;
       }
       else if(is_prime(n)){
        cout << 1 << " " << n-1 << endl;
       }
       else
       {
           lli a=1;
           lli ans=LLONG_MIN;
           for(lli i=2;i<=sqrt(n);i++)
           {
               if(n%i==0 )
               {
                   lli b=n/i;
                   a=max(b,i);
                   ans = max(a,ans);
               }
           }
           cout<<ans<<" "<<n-ans<<endl;
       }
   }

    return 0;
}
