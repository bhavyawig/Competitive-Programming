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
       lli k;
       cin>>k;
       lli cnt=0;
       if(k==2)
       {
           cout<<"1"<<endl;
       }
       else
       {
           while(k%2!=1)
           {
               k=k/2;
               cnt++;
           }
       }
       cout<<cnt<<endl;

   }

    return 0;
}

