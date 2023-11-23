#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   vector<int> a(m);
   vector<int> b(m);
   for(int i=0;i<m;i++)
   {
    lli u; cin>>u;
    a.push_back(u);
   }

   for(int i=0;i<m;i++)
   {
    lli u1; cin>>u1;
    b.push_back(u1);
   }
   for(int i=0;i<m;i++)
   {
        int fir=a[i];
        int sec=b[i];
        if(x[fir]==-1 && x[sec]==-1)
        {
            x[fir]=0;
            x[sec]=0;
        }
   }
   
}