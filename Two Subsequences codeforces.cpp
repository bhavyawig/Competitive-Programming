
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       string s;
       cin>>s;
       lli p=0;
       lli len=s.length();
       vector<char> v;
       for(lli i=0;i<len;i++)
       {
           v.push_back(s[i]);
       }
       char min='z';
       for(lli i=0;i<len;i++)
       {
           if(v[i]<min)
           {
               min=v[i];
               p=i;
           }
       }
       cout<<min<<" ";
       v.erase(v.begin()+p);
        for (auto i = v.cbegin(); i != v.cend(); ++i)
        cout <<*i;

        cout<<endl;
   }

    return 0;
}
