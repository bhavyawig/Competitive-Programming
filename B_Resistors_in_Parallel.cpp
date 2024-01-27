#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli a[n];
    double sum=0.00000000000000000000;
    for(int i=0;i<n;i++)
   { 
       cin>>a[i];
       sum+=(1.00000000000000000000000/a[i]);
   }
   cout<<setprecision(20)<<1.00000000000000/sum;

}