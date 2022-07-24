#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli value;
   lli a[n];
   if(n%2==0)
   value=n/2;
   else
    value=(n/2)+1;
   lli zero=0,pos=0,neg=0;
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]==0)
        zero++;
       else if(a[i]>0)
        pos++;
       else
        neg++;
   }
   if(pos>=value)
    cout<<1;
    else if(neg>=value)
        cout<<-1;
   else
    cout<<0;
    return 0;
}

