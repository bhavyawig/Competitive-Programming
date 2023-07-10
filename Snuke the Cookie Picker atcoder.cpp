#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
  lli h,w;
  cin>>h>>w;
  char a[h][w];
  for(int i=0;i<h;i++)
  {
      for(int j=0;j<w;j++)
      {
          char temp;
          cin>>temp;
          a[i][j]=temp;
      }
  }
  int cnt=0,check=0;
  for(int i=0;i<h;i++)
  {
      for(int j=0;j<w;j++)
      {
          if(a[i][j]=='.')
          {
              if(j-1>=0 && a[i][j-1]=='#') cnt++;
              if(j+1<w && a[i][j+1]=='#') cnt++;
              if(i-1>=0 && a[i-1][j]=='#') cnt++;
              if(i+1<h && a[i+1][j]=='#') cnt++;
              //cout<<cnt<<endl;
              if(cnt>=2 && check==0)
              {
                  cout<<i+1<<" "<<j+1<<endl;
                  check++;
                  break;
              }
              cnt=0;
          }

      }
  }

    return 0;

}
