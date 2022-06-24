#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   vector<lli> vec;
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
   }
   vector<lli> s;
   s.push_back(a[0]);
   lli freq=0;
   for(lli i=1;i<n;i++)
   {
       if(a[i]==s[i-1] && freq==a[i]-1 && a[i]!=2)
       {
           auto first=s.begin()+i-a[i]+1;
           auto last=s.begin()+i;
           s.erase(first,last);
           freq=0;
       }
       else if(a[i]==s[i-1] && a[i]==2)
       {
           s.pop_back();
           freq=0;
       }
       else if(a[i]==s[i-1] && freq!=a[i])
       {
           freq++;
       }
       else
       {
           s.push_back(a[i]);
           freq=0;
       }
       vec.push_back(s.size());
   }
   cout<<1<<endl;
   for(lli i=0;i<vec.size();i++)
   {
       cout<<vec[i]<<endl;
   }

    return 0;
}

