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
       lli k=0;
       for(lli i=2;i<=30;i++)
       {
           lli div=(pow(2,i)-1);
           if(n%div==0)
           {
               k=i;
               break;
           }
       }
       lli x=n/(pow(2,k)-1);
       cout<<x<<endl;
   }

    return 0;
}

