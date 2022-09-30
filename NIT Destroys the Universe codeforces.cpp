#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
       vector<lli> vec;
       lli kro=0,check=0;
       for(lli i=0;i<n;i++)
       {
           lli g;
           cin>>g;
           if(g!=0)
            kro++;
           if(kro>=1)
           vec.push_back(g);
       }
       if(vec.empty())
        cout<<0<<endl;
       else{
       for(int i=vec.size()-1;i>=0;i--)
       {
           if(vec[i]==0 && check==0)
            vec.pop_back();
           else
            check++;
       }
       lli cnt=0;
       for(lli i=0;i<vec.size();i++)
       {
           if(vec[i]==0)
            cnt++;
       }
       if(cnt==0)
        cout<<1<<endl;
       else
      cout<<2<<endl;
       }
   }

    return 0;
}


