#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli t;
   cin>>t;
   lli ft=(t*t)+(2*t)+3;
   lli ftt=ft+t;
    lli lhs=(ftt*ftt)+(2*ftt)+3;
    lli rhs=(ft*ft)+(2*ft)+3;
    lli ans=lhs+rhs;
    lli humaraans=(ans*ans)+(2*ans)+3;
    cout<<humaraans<<endl;


    return 0;
}

