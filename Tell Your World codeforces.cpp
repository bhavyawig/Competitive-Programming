#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{

       lli n;
       cin>>n;
       vector<pair<lli,lli>> a;
       for(lli i=0;i<n;i++)
       {
           lli samp;
           cin>>samp;
           a.push_back(make_pair(i+1,samp));
       }
       set<lli> ss;
       for(lli i=1;i<n;i++)
       {
           lli store=((a[i].second-a[i-1].second)/(a[i].first-a[i-1].first));
           ss.insert(store);
       }
       if(ss.size()==2 ||  ss.size()==1)
       {
           cout<<"Yes"<<endl;
       }
       else
       {
           cout<<"No"<<endl;
       }


    return 0;
}

