#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,d;
   cin>>n>>d;
   vector<int> vec;
   for(int i=0;i<n;i++)
   {
       int g;
       cin>>g;
       vec.push_back(g);
   }
   vector<int>::iterator itr;
   long long int cnt=0;
   for(int i=0;i<n-2;i++)
   {
       lli y=vec[i]+d;
       itr=upper_bound(vec.begin()+i,vec.end(),y);
       lli index=itr-vec.begin();
       //cout<<index<<endl;
       if(vec[index-1]-vec[i]<=d){
       long long int btw=index-(i+1)-1;
       long long int val=(btw*(btw+1))/2;
       cnt+=val;
       }
   }
   cout<<cnt<<endl;

    return 0;
}


