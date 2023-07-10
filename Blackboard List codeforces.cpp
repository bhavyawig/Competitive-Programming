#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
     lli n;
     cin>>n;
     lli a[n];
     for(int i=0;i<n;i++)
        cin>>a[i];
     sort(a,a+n);
     if(a[0]<0) cout<<a[0]<<endl;
     else cout<<a[n-1]<<endl;N
    }

    return 0;

}
