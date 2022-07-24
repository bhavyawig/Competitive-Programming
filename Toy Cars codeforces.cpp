#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n][n];
   set<lli> se;
   for(lli i=0;i<n;i++)
   {
       for(lli j=0;j<n;j++)
       {
           cin>>a[i][j];

           if(a[i][j]==1)
            se.insert(i+1);
           if(a[i][j]==2)
            se.insert(j+1);
           if(a[i][j]==3)
           {
               se.insert(i+1);
               se.insert(j+1);
           }
       }
   }
   cout<<n-se.size()<<endl;
   for(lli i=1;i<=n;i++)
   {
       auto pos=se.find(i);
       if(pos==se.end())
        cout<<i<<" ";
   }

    return 0;
}

