#include<bits/stdc++.h>
using namespace std;
 typedef long long int lli;

 
int main(){
       lli test;
    cin>>test;

    for(lli e=0;e<test;e++)
    {
     lli l,r; 
     cin>>l>>r;
     lli val=log2(l)/log2(3);
     val++;
     lli ans=2*val;
     while(r > l)
     {
       lli temp=log2(r)/log2(3);
       lli uf=pow(3,temp);
       lli len=max(uf,l+1);
       lli count = r-len;
        r=uf;
        r--;
       ans+=((temp+1)*(count+1));
     }
     cout<<ans<<endl;
    }
}