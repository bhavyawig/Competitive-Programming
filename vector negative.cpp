#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   vector<pair<float,string>> v;
   v.push_back(make_pair(-1.445,"bha"));
   //cout<<v[0].first;
   cout<<endl;
   //cout<<v[0].second;


   vector<int> v1;
   v1.push_back(1);
   v1.push_back(2);
   cout<<v1.size()<<endl;

   cout<<10-(-3);

   int a[4];
   a[0]=-1;a[1]=-3;a[2]=-2; a[3]=-9;
   int q=sizeof(a)/sizeof(a[0]);
   sort(a,a+q);
   cout<<"a[0]"<<a[0]<<endl;
   cout<<"a[1]"<<a[1]<<endl;
   cout<<"a[2]"<<a[2]<<endl;
   cout<<"a[3]"<<a[3];

       return 0;
}

