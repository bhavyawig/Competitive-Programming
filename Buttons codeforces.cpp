#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    if(n==2)
    {
        cout<<"3"<<endl;
    }
    else
    {
        lli ans=n*(n-1);
        cout<<ans+1;
    }
    return 0;
}


