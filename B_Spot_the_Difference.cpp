#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {
    lli n;
    cin>>n;
    vector<vector<char>> a(n,vector<char> (n));
      vector<vector<char>> b(n,vector<char> (n));

      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
            char uf; cin>>uf;
            a[i][j]=uf;
        }
      }

      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
            char uf; cin>>uf;
            b[i][j]=uf;
        }
      }
      int ho=0,fir=0,end=0;
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
           if(a[i][j]!=b[i][j] && ho==0)
           {
            fir=i+1;
            end=j+1;
            ho++;
            break;
           }
        }
      }
      cout<<fir<<" "<<end<<endl;
    return 0;
}


