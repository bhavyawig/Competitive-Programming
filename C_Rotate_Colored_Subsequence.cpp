#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   string s;
   cin>>s;
   vector<lli> c;
   vector<deque<lli>> colorIndices(m + 1);
   for(lli i=0;i<n;i++)
   {
    lli v; cin>>v;
    c.push_back(v);
    colorIndices[v].push_back(i);
   }

   for (int i = 1; i <= m; i++) {
        if (!colorIndices[i].empty()) {
            int last = colorIndices[i].back();
            colorIndices[i].pop_back();
            colorIndices[i].push_front(last);
        }
    }
  //   for(int i=1;i<=m;i++)
   //{/
    //for(int ind:colorIndices[i])
    //cout<<ind<<" ";
    //cout<<endl;
   //}
    string finalS;
    for (int i = 0; i<n; i++) {
        int val=c[i];
        finalS+=s[colorIndices[val].front()];
        colorIndices[val].pop_front();
    }
cout<<finalS<<endl;


    return 0;
}