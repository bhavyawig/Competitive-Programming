#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        long long int n;
        cin>>n;
        long long int ans=((n+1)*(n-1)*n)/3;
        cout<<ans<<endl;
    }
    return 0;
}


