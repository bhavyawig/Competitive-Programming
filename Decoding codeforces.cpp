#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   string s;
   cin>>s;
   deque<char> d;
   for(lli i=0;i<n-1;i++)
   {
       if(n%2==0){
       if(i%2==0)
       {
           d.push_front(s[i]);
       }
       else
       {
          d.push_back(s[i]);
       }}
       else
       {
          if(i%2==0)
       {
           d.push_back(s[i]);
       }
       else
       {
          d.push_front(s[i]);
       }
       }
   }
   d.push_back(s[n-1]);
   for(auto it=d.begin();it!=d.end();it++)
   {
       cout<<*it;
   }


    return 0;
}

