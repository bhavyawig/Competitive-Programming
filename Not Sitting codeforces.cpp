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
       lli n,m;
       cin>>n>>m;
       int cnt=min(n,m);
       cout<<cnt<<" "<<cnt<<" ";
       for(int i=2;i<(n*m)-1;i++)
       {
           if(ceil(log(i)/log(2))==floor(log(i)/log(2)))
           {
               cnt++;
               cout<<cnt<<" ";
           }
           else
           {
               cout<<cnt<<" ";
           }
       }
       cout<<endl;
   }

    return 0;
}
