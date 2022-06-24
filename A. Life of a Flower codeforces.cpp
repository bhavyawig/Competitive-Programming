#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
       lli a[n];
       lli ht=1,die=0;
       for(lli i=0;i<n;i++)
        cin>>a[i];
        if(a[0]==1)
            ht+=1;
       for(lli i=1;i<n;i++)
       {
           if(a[i-1]==0 && a[i]==0)
            die++;
           else if(a[i-1]==0 && a[i]==1)
            ht+=1;
           else if(a[i-1]==1 && a[i]==1)
            ht+=5;
       }
       if(die>=1)
        cout<<-1<<endl;
       else
        cout<<ht<<endl;
   }

    return 0;
}

