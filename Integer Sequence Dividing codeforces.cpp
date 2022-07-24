#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   double  n;
   cin>>n;
   if(ceil(((n-1)/4.0)+1)==floor(((n-1)/4.0)+1) || ceil(((n-2)/4.0)+1)==floor(((n-2)/4.0)+1))
    cout<<1;
   else
    cout<<0;
    return 0;
}
