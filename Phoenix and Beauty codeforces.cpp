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
       set<lli> s;
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
           s.insert(a[i]);
       }
       if(s.size()>k)
       {
           cout<<-1;
       }
       else
       {
           lli loji[k];
           lli j=0;
           for(lli i=0;i<k;i++){
           for(auto &itr:s)
           {
               if(j<k){
               loji[j]=itr;
               j++;}
           }
           }
           cout<<k*n<<endl;
           lli q=0;
           for(lli i=0;i<(n*k);i++){
                if(q==k)
                {
                    q=0;
                }
           cout<<loji[q]<<" ";
           q++;
           }
       }
       cout<<endl;

   }

    return 0;
}

