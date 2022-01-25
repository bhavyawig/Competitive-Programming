#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

vector<lli> input(vector<lli> inputvector,lli endlimit)
{
    for(lli i=0;i<endlimit;i++)
    {
        lli samplenumber;
        cin>>samplenumber;
        inputvector.push_back(samplenumber);
    }
    return inputvector;
}

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
       if(n==2)
       {
           cout<<"NO"<<endl;
       }
       else{
       vector<lli > a;
       for(lli i=1;i<=n;i++)
       {
           a.push_back(i);
       }
       sort(a.begin(),a.end());
       if(n%2==0){
       for(lli i=0;i<n;i++)
       {
           swap(a[i],a[i+1]);
           i++;
       }}
       else
       {
         for(lli i=0;i<=n-1;i++)
       {
           swap(a[i],a[i+1]);
           i++;
       }
       }
       cout<<"YES"<<endl;
       for(auto &itr: a)
       {
           cout<<itr<<" ";
       }
       cout<<endl;}
   }

    return 0;
}

