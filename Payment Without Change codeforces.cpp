#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int test;
    cin>>test;
    for(int e=0;e<test;e++)
    {
        int a,b,n,s;
        cin>>a;    cin>>b;   cin>>n;   cin>>s;
        lli ans=1ll *a*n+b;
        if(s%n<=b && ans>=s)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}


