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
       lli z=0;
       cin>>n;
       lli a[n];
       set<lli> s;
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
          // s.insert(a[i]);
       }
      // vector<lli> v;
       //for(auto &itr:s)
        //v.push_back(itr);
      // if(s.size()==0)
       //{
         //  cout<<"yes"<<endl;
       //}
       //else if(s.size()==1 && v[0]==2 && n==2)
       //{
         //  cout<<"yes"<<endl;
       //}
       //else if(s.size()==1 && n>1)
       //{
         //  cout<<"yes"<<endl;
       //}
       //else
       //{
       if(n==1 && a[0]==1)
       cout<<"yes"<<endl;
       else if(n==1)
        cout<<"no"<<endl;
       else{
           sort(a,a+n);
            if(a[n-1]-a[n-2]<2)
            cout<<"yes"<<endl;
           else
            cout<<"no"<<endl;
       }
       //}
   }

    return 0;
}

