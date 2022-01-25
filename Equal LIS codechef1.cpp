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
       if(n%2==0)
       {
           cout<<"yes"<<endl;
           for(lli i=1;i<=(n/2);i++)
           {
               cout<<i<<" ";
           }
           cout<<n<<" ";
           for(lli i=n-1;i>(n/2);i--)
           {
               cout<<i<<" ";
           }
           cout<<endl;
       }
       else
       {
           cout<<"yes"<<endl;
           for(lli i=1;i<=(n/2);i++)
           {
               cout<<i<<" ";
           }
           for(lli i=n;i>(n/2);i--)
           {
               cout<<i<<" ";
           }
           cout<<endl;
       }
   }
   }

    return 0;
}


