#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli a,b,r,f=1,ans=0;
        cin>>a>>b>>r;
        if(a<b)
        {
            lli to=b;
            b=a;
            a=to;
        }
       for(lli i=62;i>=0;i--)
       {
        lli uf=1LL<<i;
            bool k=a & uf;
            bool k3=b & uf;
            if(k != k3)
            {
                if(f)
                {
                    f=0;
                }
                else if(k)
                {
                    
                    if(ans+uf<=r)
                    {
                        ans+=uf;
                    }
                }
            }                
       }
       cout<<lli(abs((a^ans)-(b^ans)))<<endl;
    }  
}
