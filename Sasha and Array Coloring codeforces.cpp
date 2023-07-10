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
        int sum=0;
     for(int i=0;i<n/2;i++)
     {
       int val1=a[n-i-1]-a[i];
       sum+=val1;
     }
     cout<<sum<<endl;
    }

    return 0;

}
