#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,m,k;
        cin>>n>>m>>k;

        for(int i=n;i>m;i--)
        {
            cout<<i<<" ";
        }
        for(int i=1;i<=m;i++)
      {
          if(i!=m)
          cout<<i<<" ";
          else
          cout<<i<<endl;
    }

    }

    return 0;
}


