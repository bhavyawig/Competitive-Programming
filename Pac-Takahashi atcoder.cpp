#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 lli a[301][301];
     lli vis[301][301];

lli dfs(lli i, lli j, )
{

    dfs(i+1,)
}

int main()
{
   lli r,c,t;
   cin>>r>>c>>t;
   for(lli i=0;i<r;i++)
   {
       for(lli j=0;i<c;j++){
        cin>>a[i][j];
        if(a[i][j]=='S')
        {
            storei=i; storej=j;
        }
        vis[i][j]=0;
       }
   }
   dfs(storei,storej);


    return 0;

}
