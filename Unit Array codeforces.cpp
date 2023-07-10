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
     lli neg=0,pos=0;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         if(a[i]==1)pos++;
         else neg++;
     }
     if(pos>=neg && neg%2==0) cout<<0<<endl;
     else if(pos<neg)
     {
         lli val=(neg-pos)/2;
         neg=neg-val;
         pos=pos+val;
         if(neg!=pos){ val++;neg--;pos++;}
         if(neg%2==0) cout<<val<<endl;
         else
         {
             val++;
             cout<<val<<endl;
         }
     }
     else if(pos>=neg && neg%2!=0)
     {
         cout<<1<<endl;
     }
    }

    return 0;

}
