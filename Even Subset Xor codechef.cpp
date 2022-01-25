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

lli countone(lli n)
{
    lli count=0;
     while( n )
            {
            n = n&(n-1);
               count++;
            }
            return count;
}
int main()
{
   lli test;
   cin>>test;
   for(lli q=0;q<test;q++)
   {
       lli x;
       cin>>x;
       lli a,b,c,d,e;
       lli cnt=0;
       lli no=0;
       for(lli i=3;i<1000000;i++)
       {
           lli cnt=countone(i);
           if(cnt%2==0 && no<x)
           {
               cout<<i<<" ";
               no++;
           }
       }
       cout<<endl;
   }

    return 0;
}

