#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,m;
        cin>>n>>m;
        char a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            cin>>a[i][j];
        }
         int row=0;
         int actual=0;
          for(int i=0;i<n;i++)
        {
            int cnt=0;
            for(int j=0;j<m;j++)
           {
            if(a[i][j]=='#')
            cnt++;
           }
           if(cnt>actual)
           {
            actual=cnt;
            row=i+1;
           }
        }
        int c=0,actual1=0;
         for(int i=0;i<m;i++)
        {
            int cnt=0;
            for(int j=0;j<n;j++)
           {
            if(a[j][i]=='#')
            cnt++;
           }
           if(cnt>actual1)
           {
            actual1=cnt;
            c=i+1;
           }
        }
        cout<<row<<" "<<c<<endl;
    }
    return 0;
}


