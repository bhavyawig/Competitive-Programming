#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   vector<int> a(n);
   for(int i=0;i<n;i++)
   cin>>a[i];

   for(int i=1;i<n;i++)
   {
    cout<<a[i-1]*a[i]<<" ";
   }
}