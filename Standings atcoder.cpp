#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool compare(const pair<lli,long double>& a, const pair<lli,long double>& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}
int main()
{
  vector<pair<lli,long double>> vec;
  lli n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      long double a,b,val;
      cin>>a>>b;
      if(a==0)
      vec.push_back({i+1,0});
      else{
      val=a/(a+b);
      vec.push_back({i+1,val});
      }
  }
  sort(vec.begin(),vec.end(),compare);
  for(auto itr:vec)
  {
      cout<<itr.first<<" ";
  }
    return 0;

}
