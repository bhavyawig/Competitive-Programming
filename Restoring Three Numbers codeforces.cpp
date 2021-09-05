#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n[4];
   for(int i=0;i<4;i++)
   {
       cin>>n[i];
   }
   int q=sizeof(n)/sizeof(n[0]);
   sort(n,n+q);
   int c=n[3]-n[0];
   int b=n[3]-n[1];
   int a=n[3]-n[2];
   cout<<a<<" "<<b<<" "<<c;
    return 0;
}

