#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli pow1(lli a, lli x) {
    lli result = 1;
    while (x > 0) {
        if (x & 1) {
            result *= a;
        }
        a *= a;
        x >>= 1; 
    }
    return result;
}
int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli a,b,l;
        cin>>a>>b>>l;
        set<lli> s;
        for(lli i=0;pow1(a,i)<=l;i++)
        {
            for(lli j=0;pow1(b,j)<=l;j++)
            {
                lli val=pow1(a,i)*pow1(b,j);
                if(l%val==0)
                {
                    s.insert(l/val);
                }
            }
        }
        cout<<s.size()<<endl;

    }
}
