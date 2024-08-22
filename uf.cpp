#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n;
        cin>>n;
        lli ans=0;
        while(n)
        {
            ans+=(n%10);
            n=n/10;
        }
        cout<<ans<<endl;
    }
    return 0;
}
  // lli l=a;
        // lli ans=0,temp=0;
        // if(a%2==0)
        // {
        //     ans=(log(a)/log(3))+1;
        //     temp=pow(3,ans)*(a+1);
        // }
        // else{
        //     a++;
        //      ans=(log(a)/log(3))+1;
        //     temp=pow(3,ans)*(a-1);
        // }

        // for(lli i=l+2;i<=b;i++)
        // {
        //     ans+=((log(i)/log(3))+1);

        // }
        // ans+=log(temp)/log(3)+1;
        // cout<<ans<<endl;

