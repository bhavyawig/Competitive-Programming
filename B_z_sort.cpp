#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   sort(a,a+n);
   lli e=n-1;
   for(int i=0;i<n/2;i++)
   {
    cout<<a[i]<<" "<<a[e]<<" ";
    e--;
   }
   if(n%2!=0)
   cout<<a[n/2];
}