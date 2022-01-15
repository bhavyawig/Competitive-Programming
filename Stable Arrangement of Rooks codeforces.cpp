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
       if(n%2==0 && k>n/2)
       {
           cout<<"-1"<<endl;
       }
       else if(n%2!=0 && k>((n/2)+1))
       {
           cout<<"-1"<<endl;
       }
       else
       {
           int a[n][n];
           int cnt=0;
           for(int i=0;i<n;i++)
           {
               for(int j=0;j<n;j++)
               {
                   if(i==j && i%2==0 && cnt<k)
                   {
                       cout<<"R";
                       cnt++;
                   }
                   else
                   {
                       cout<<".";
                   }
               }
               cout<<endl;
           }
       }

   }

    return 0;
}

