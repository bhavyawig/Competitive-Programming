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
     lli xo=0,boxes=0;
     for(int i=n-1;i>=0;i--)
     {
         if(xo>=a[i])
         {
             xo^=a[i];
         }
         else
         {
             boxes++;
             xo=max(xo,a[i]);
         }
     }
     cout<<boxes<<endl;
    }

    return 0;

}
