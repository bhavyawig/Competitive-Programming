#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   vector<string> str;
   vector<lli> vec;
   for(int e=0;e<n;e++)
   {
       string s;
       lli val;
       cin>>s>>val;
       str.push_back(s);
       vec.push_back(val);
   }
   lli store=INT_MAX,index=0;
   for(int i=0;i<vec.size();i++)
   {
       if(vec[i]<store)
       {
           store=min(store,vec[i]);
           index=i;
       }
   }
   for(int i=index;i<vec.size();i++)
   {
       cout<<str[i]<<endl;
   }
   for(int i=0;i<index;i++)
    cout<<str[i]<<endl;

    return 0;

}
