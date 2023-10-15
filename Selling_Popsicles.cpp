#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
      lli n;
      cin>>n;
      vector<lli> a(n);
      for(int i=0;i<n;i++)
      {
        lli w; cin>>w;
       // cout<<w;
        a[i]=w;
      }
      sort(a.begin(),a.end());
      //for(int i=0;i<n;i++)
      //cout<<a[i]<<" ";
      int val=0;
      //cout<<a[0]<<" "<<a[n-1];
      for(int i=a[0]-10;i<=a[n-1]+10;i++)
      {
        if(i-a[0]<=10 && a[n-1]-i<=10 && val==0)
        {
            cout<<i<<endl;
            val++;
            break;
        }
      }
    }
    return 0;
}