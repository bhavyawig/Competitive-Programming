#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   vector<lli> ans;
  for(int i=0;i<=100;i++)
  {
    lli k;
    cin>>k;
    ans.push_back(k);
    if(k==0)
    break;
  }
   for(lli i=ans.size()-1;i>=0;i--)
   {
    cout<<ans[i]<<endl;
   }
}

