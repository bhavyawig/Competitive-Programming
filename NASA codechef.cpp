#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
     lli n;
     cin>>n;
     lli a[n];
     unordered_map<int,int> m;
     for(int i=0;i<n;i++){
        cin>>a[i];
     m[a[i]]++;
     }
     lli ans=0;
     ans+=n;
     vector<int> vec;
     for(int i=0;i<(pow(2,15));i++)
     {
         string s=to_string(i);
         string p=s;
         reverse(s.begin(),s.end());
         if(s==p)
            vec.push_back(i);
     }
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<vec.size();j++)
         {
             int val=a[i]^vec[j];
             ans+=m[val];
         }
     }
     ans=ans/2;
     cout<<ans<<endl;

    }

    return 0;

}
