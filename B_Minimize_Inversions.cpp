#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>>p(n);
        vector<int> vec,vec1;
      for(int i=0;i<n;i++)
      {
        lli a;
        cin>>a;
        vec.push_back(a);
      }
        for(int i=0;i<n;i++)
      {
        lli a1;
        cin>>a1;
        vec1.push_back(a1);
      }
        for(int i=0;i<n;i++)
      {
       p.push_back({vec[i],vec1[i]});
      }
        sort(p.begin() , p.end());
        for(auto a : p)
        {
          if(a.first!=0)
            cout << a.first << " ";
        }
          cout <<endl;
       for(auto a : p)
        {
          if(a.second!=0)
            cout << a.second<< " ";
        }
        cout << endl;
    }
}
        
