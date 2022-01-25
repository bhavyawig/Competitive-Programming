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
   lli n,k;
   cin>>n>>k;
   lli left=n%k;
   if(left==0)
   {
       cout<<n+k<<endl;
   }
   else{
    cout<<(n-(n%k)+k)<<endl;
   }
    return 0;
}

