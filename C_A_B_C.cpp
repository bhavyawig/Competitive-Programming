#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   vector<lli> a(n);
   for(lli i=0;i<n;i++)
   {
    cin>>a[i];
   }

   lli m;
   cin>>m;
   vector<lli> b(m);
   for(lli i=0;i<m;i++)
   {
    cin>>b[i];
   }

   lli l;
   cin>>l;
   vector<lli> c(l);
   for(lli i=0;i<l;i++)
   {
    cin>>c[i];
   }

   lli q;
   cin>>q;
   vector<lli> x(q);
   for(lli i=0;i<q;i++)
   {
    cin>>x[i];
   }

   set<lli> s;
   for(lli i=0;i<n;i++)
   {
    for(lli j=0;j<m;j++)
    {
        for(int k=0;k<l;k++)
        {
            lli val=a[i]+b[j]+c[k];
            s.insert(val);
        }
    }
   }

   for(lli i=0;i<q;i++)
   {
    lli dhundo=x[i];
    if(s.find(dhundo)!=s.end())
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
   }
}
