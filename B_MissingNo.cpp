#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   map<int,int> m;
   for(int i=0;i<n;i++)
  { cin>>a[i];
  m[a[i]]++;
  }
   sort(a,a+n);
   lli strt=a[0],nedd=a[n-1]+1,no=0;
   for(int i=strt;i<=nedd;i++)
   {
    if(m.find(i)==m.end() && no==0)
    {
        cout<<i<<endl;
        no++;
        break;
    }
   }
    
    return 0;
}