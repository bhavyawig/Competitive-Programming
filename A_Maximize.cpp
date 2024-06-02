#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 lli gcd(lli a, lli b) {
    while (b != 0) {
        lli temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
        lli x;
        cin>>x;
        lli ans=0,no=0;
        for(int i=1;i<x;i++)
        {
            lli uf=gcd(x,i)+i;
            if(ans<uf)
            {
                ans=uf;
                no=i;
            }
        }
         cout<<no<<endl;
    }
    return 0;
}


