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
   lli a[test];
   lli even=0,odd=0,index=0;
   for(lli e=0;e<test;e++)
   {
       cin>>a[e];
       if(a[e]%2==0)
       {
           even++;
       }
       else
       {
           odd++;
       }
   }
   if(even==1)
   {
       for(lli i=0;i<test;i++)
       {
           if(a[i]%2==0)
           {
               index=i+1;
           }
       }
   }
   else
   {
        for(lli i=0;i<test;i++)
       {
           if(a[i]%2!=0)
           {
               index=i+1;
           }
       }
   }
   cout<<index<<endl;


    return 0;
}

