#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,k;
       cin>>n>>k;
       lli a[n];
       lli first=INT_MAX,ekbaar=0;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]==k && ekbaar==0)
           {
               ekbaar++;
               first=i;
           }
       }
       if(ekbaar==1 && first<n-1)
        cout<<"Yes"<<endl;
       else
        cout<<"No"<<endl;
   }

    return 0;
}


