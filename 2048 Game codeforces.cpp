#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int test;
    cin>>test;
    for(int e=0;e<test;e++)
    {
        lli n;
        cin>>n;
        lli a[n],sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=2048)
            {
            sum=sum+a[i];
            }
        }
        if(sum>=2048)
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
