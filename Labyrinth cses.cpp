#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
char a[1001][1001];
char vis[1001][1001];
int main()
{

  lli n,m;
  cin>>n>>m;
  lli strt=0,endd=0;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          cin>>a[i][j];
          vis[i][j]=0;
          if(a[i][j]=='A')
          {
              strt=i;
              endd=j;
          }
      }
  }
    queue<lli> q;
    while(q.empty()==false)
    {

    }

  if(store=="")
    cout<<"NO"<<endl;
  else
  {
      cout<<"YES"<<endl;
      cout<<store.length()<<endl;
      cout<<store<<endl;
  }

    return 0;

}
