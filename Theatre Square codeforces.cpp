
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,m,a;
    cin>>n;
    cin>>m;
    cin>>a;
    unsigned long long int r=n/a;
   unsigned long long int q=m/a;
    if(r*a!=n)
    {
        r++;
    }
    if(q*a!=m)
    {
        q++;
    }
    cout<<r*q;

    return 0;
}
