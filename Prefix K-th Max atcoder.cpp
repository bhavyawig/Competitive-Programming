#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
       lli n,k;
       cin>>n>>k;
       vector<int> a(n);
       priority_queue<int, vector<int>,greater<int>> d;
       for(int i=0;i<n;i++) {cin>>a[i]; }
       for(int i=0;i<k;i++)
       {
           d.push(a[i]);
       }
       cout<<d.top()<<endl;
       for(int i=k;i<n;i++)
       {
           if(d.top()<a[i])
           {
               d.pop();
               d.push(a[i]);
           }
           cout<<d.top()<<endl;
       }
    return 0;
}

