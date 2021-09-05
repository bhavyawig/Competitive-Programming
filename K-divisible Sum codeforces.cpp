#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int test;
    cin>>test;
    for(int e=0;e<test;e++)
    {
        int n,k;
        cin>>n;    cin>>k;
        if(n>=k && n%k==0)
        {
            cout<<n/k<<endl;
        }
        else if(n>=k && n%k!=0)
        {
            cout<<n/k+1<<endl;
        }
        if(k>n && k%n==0)
        {
            cout<<k/n<<endl;
        }
        else if(k>n && k%n!=0)
        {
            cout<<k/n+1<<endl;
        }
    }
    return 0;
}


