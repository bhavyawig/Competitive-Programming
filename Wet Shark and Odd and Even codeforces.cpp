#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   vector<lli> odd;
   lli sum=0;
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]%2==0)
        sum+=a[i];
       else{
        odd.push_back(a[i]);
        sum+=a[i];}
   }
   lli removekro=0,x=0;
   if(odd.size()>0)
   {
        sort(odd.begin(),odd.end());
        if(odd.size()%2!=0){
        removekro=odd[0];
        x++;}
   }
   if(x==0)
    cout<<sum;
   else
    cout<<sum-removekro;


    return 0;
}

