#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
      int n,m;
      cin>>n>>m;
      vector<int> adj[n+1];
      for(int i=0;i<m;i++)
      {
          int u,v;
          cin>>u>>v;
          adj[u].push_back(v);
          adj[v].push_back(u);
      }
      map<int,int> mo;
      for(int i=1;i<=n;i++)
      {
          int siz=adj[i].size();
          if(siz!=1)
          mo[siz]++; // 4 5
          // 5 1
      }
        if(mo.size()==1)
        {
            int no=0;
            for(auto itr:mo)
                 no=itr.first;
            cout<<no<<" "<<no-1<<endl;
        }
        else
        {
            int cnt=0,fre1=0,fir=0,fre2=0,sec=0;
               for(auto itr:mo)
               {
                   if(cnt==0)
                   {
                        fir=itr.first;
                       cnt++;
                        fre1=itr.second;
                   }
                   if(cnt==1)
                   {
                        sec=itr.first;
                        fre2=itr.second;
                   }
               }
               if(fre1>=fre2)
               {
                   cout<<sec<<" "<<fir-1<<endl;
               }
               else
                cout<<fir<<" "<<sec-1<<endl;
        }

    }

    return 0;

}
