#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long  int lli;

int main()
{
     lli n;
    cin>>n;
    if(n%2==0)
    {
        cout<<setprecision(10)<<pow(2,n/2);
    }
    else
    {
        cout<<0;
    }
    return 0;
}


